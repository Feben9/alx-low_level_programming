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

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator)
		{
			printf("%s", va_arg(ap, char*));
			if (i == n - 1)
				break;
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
