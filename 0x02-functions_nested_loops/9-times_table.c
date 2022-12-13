#include <stdio.h>
#include "main.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int row, clmn, result;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (clmn = 0; clmn <= 9; clmn++)
		{
			result = (row * clmn);
			if ((result / 10) > 0)
			{
				_putchar((result / 10) + '0');
			}
			else
			{
				_putchar(' ')
			}
			_putchar((result % 10) + '0');
			if (clmn < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
