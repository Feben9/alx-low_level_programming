#include <stdio.h>
/**
 * swap_int - a function that swaps the values of two integers
 * @a: a single entry
 * @b: a single entry
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
