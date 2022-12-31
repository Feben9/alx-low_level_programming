#include <stdio.h>
/**
 * main -a program that prints all possible different
 * combinations of three digits
 * Return: always 0
 */
int main(void)
{
	int w, x, y;

	for (w = '0'; w <= '9'; w++)
	{
		for (x = w; x <= '9'; x++)
		{
			for (y = x; y <= '9'; y++)
			{
				if (w == x)
					continue;
				if (x == y)
					continue;
				if (y == w)
					continue;
				putchar(w);
				putchar(x);
				putchar(y);
				if (w == '7' && x == '8' && y == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
