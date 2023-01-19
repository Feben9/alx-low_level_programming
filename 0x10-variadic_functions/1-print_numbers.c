#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - a function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers
 * @...: variable parameters
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		if (separator)
		{
			printf("%d" , va_arg(ap, unsigned int));
			if (i == n - 1)
				break;
			printf("%s", separator);
		}
	}
	
	printf("\n");

	va_end(ap);
}
