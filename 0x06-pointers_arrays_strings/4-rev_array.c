#include <stdio.h>
#include "main.h"
/**
 * reverse_array - a function to reverse an integer array
 * @a: an array of integers
 * @n: a number of elements to swap
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = n - 1;
	int j;

	while (i >= n / 2)
	{
		j = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = j;
		i--;
	}
}
