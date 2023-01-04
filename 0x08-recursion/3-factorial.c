#include <stdio.h>
#include "main.h"
/**
 * factorial - a function that returns the factorial of a number
 * @n: integer
 * Return: factorial
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	if (n > 0)
	{
		n = n * factorial(n - 1);
		return (n);
	}
	else
		return (-1);
}
