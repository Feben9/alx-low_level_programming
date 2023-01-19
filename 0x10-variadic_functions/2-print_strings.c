#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings
 * @separator: string to be printed between strings
 * @n: number of strings
 * @...: variable parameters
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (!(str))
			printf("(nil)");
		else
			printf("%s", str);

		if (i != n - 1 && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ap);
}
