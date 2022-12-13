#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - a function to print
 * the lowercase alphabet ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		print_alphabet();
		x++;
	}
}
