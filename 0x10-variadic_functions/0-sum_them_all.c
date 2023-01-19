#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns sum of all its parameters
 * @n: argument parameter
 * @...: variable parameters
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, unsigned int);

	_putchar('\n');
	va_end(ap);

	return (sum);
}
