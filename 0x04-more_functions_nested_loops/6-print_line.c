#include <stdio.h>
#include "main.h"
/**
 * print_line - a function that draws a straight line
 * @n: a single entry
 * Return: void
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x <= n; x++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
