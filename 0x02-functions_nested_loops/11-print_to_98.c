#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - a function to print all integer between a number and 98
 * @n: a single entry number
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(",");
		}
	}
	else
		printf("98");
	printf("\n");
}
