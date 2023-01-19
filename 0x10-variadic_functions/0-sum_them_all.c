#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - a function that returns sum of all its parameters
 * @n: argument parameter
 * @...: variable parameters
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int i = 0;
	int sum = 0;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
