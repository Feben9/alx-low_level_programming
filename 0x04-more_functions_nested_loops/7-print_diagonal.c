#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: a single entry
 * Return: void
 */
void print_diagonal(int n)
{
	int y, z;

	for (y = 0; y < n; y++)
	{
		for (z = 0; z < n; z++)
		{
			if (z == y)
				_putchar('\\');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
