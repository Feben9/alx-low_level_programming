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

	for (x = '0'; x <= '9'; x++)
	{
		for (y = x; y <= '9'; y++)
		{
			if (y == x)
				continue;
			putchar(x);
			putchar(y);
			if (x == '8' && y == '9')
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
