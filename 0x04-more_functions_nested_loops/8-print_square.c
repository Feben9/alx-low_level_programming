#include <stdio.h>
#include "main.h"
/**
 * print_square - a function that prints a square
 * @size: a single entry
 * Return: void
 */
void print_square(int size)
{
	int x = 0;
	int y;

	if (size > 0)
	{
		while (x < size)
		{
			y = 0;
			while (y < size)
			{
				_putchar('#');
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
	else
		_putchar('\n');
}
