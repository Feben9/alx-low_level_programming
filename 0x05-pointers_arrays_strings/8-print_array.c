#include <stdio.h>
#include "main.h"
/**
 * print_array - a function that prints n elements of an array of integers
 * @a: a single entry
 * @n: a single entry
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
			printf(", ");
	}
	printf("\n");
}
