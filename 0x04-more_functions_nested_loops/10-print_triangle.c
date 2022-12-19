#include <stdio.h>
#include "main.h"
/**
 * print_triangle - a function that prints a triangle
 * @size: a single entry
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (k = size - i; k > 0; k--)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
