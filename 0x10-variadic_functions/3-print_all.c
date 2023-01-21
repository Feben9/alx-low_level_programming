#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments passed to the function
 * @...: variable parameters
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, flag = 0;
	const char t_arg[] = "cifs";
	char *str;
	va_list ap;

	va_start(ap, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && flag)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int)), flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int)), flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double)), flag = 1;
				break;
			case 's':
				str = va_arg(ap, char*);
				if (!str)
				{
					printf("nil"), break;
				}
				printf("%s", str), flag = 1;
				break;
		} i++;
	} printf("\n");
	va_end(ap);
}
