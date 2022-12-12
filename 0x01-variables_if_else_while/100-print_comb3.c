#include <stdio.h>
/**
 * main - entry point
 * printing all possible different combinations of two digits
 * with some restrictions
 * Return: always 0 (success)
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		putchar(x);
		for (y = 0; y <= 9; y++)
		{
			if (y >= x)
				continue;
			putchar(y);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
