#include <stdio.h>
#include "main.h"
/**
 * print_sign - a function to print the sign of a number
 * @n: single letter input
 * Return: 1 for positive, 0 for zero and -1 for negative numbers
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(',');
		_putchar(' ');
	}
	if (n == 0)
	{
		return (0);
		_putchar(',');
		_putchar(' ');
	}
	if (n < 0)
	{
		return (-1);
		_putchar(',');
		_putchar(' ');
	}
}
