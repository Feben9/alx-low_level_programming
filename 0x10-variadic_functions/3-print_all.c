#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * print_char -  a function that prints characters
 * print_int - a function that prints integers
 * print_float - a function that prints numbers
 * print_string - a function that prints strings
 * @format: a list of types of arguments passed to the function
 * @...: variable parameters
 *
 * Return: nothing
 */

/* print_char -  a function that prints characters */
void print_char(void)
{
	char letter;
	va_list ap;
	
	letter = va_arg(ap, int);
	printf("%c", letter);
}
/* print_int - a function that prints integers */
void print_int(void)
{
	int num;
	va_list ap;
	
	num = va_arg(ap, int);
	printf("%d", num);
}
/* print_float - a function that prints numbers */
void print_float(void)
{
	float num;
	va_list ap;
	
	num = va_arg(ap, double);
	printf("%f", num);
}
/* print_string - a function that prints strings */
void print_string(void)
{
	char *str;
	va_list ap;
	
	str = va_arg(ap, char*);
	if (!str)
		printf("(nil)");
	printf("%s", str);
}
void print_all(const char * const format, ...)
{
	unsigned int i = 0, j, flag = 0;
	const char t_arg[] = "cifs";
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
				print_char();
				flag = 1;
				break;
			case 'i':
				print_int();
				flag = 1;
				break;
			case 'f':
				print_float();
				flag = 1;
				break;
			case 's':
				print_string();
				flag = 1;
				break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
