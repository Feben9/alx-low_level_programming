#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - a function to print
 * the lowercase alphabet ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char x;
	int y;

	for (y = 0; y < 10; y++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
	_putchar('\n');
	}
}
