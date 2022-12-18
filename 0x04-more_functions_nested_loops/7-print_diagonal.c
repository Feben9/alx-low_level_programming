#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: a single entry
 * Return: void
 */
void print_diagonal(int n)
{
	int x;

	if (n > 0)
	{
		for (y = n; y >= 0; y--)
		{
			for (x = 0; x <= n; x++)
				_putchar('\\');
			_putchar(' ');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
