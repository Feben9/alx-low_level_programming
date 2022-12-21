#include <stdio.h>
#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int x, y;

	for (y = 1; y <= 10; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x >= 10)
				_putchar('0' + x / 10);
			_putchar('0' + x % 10);
		}
		_putchar('\n');
	}
}
