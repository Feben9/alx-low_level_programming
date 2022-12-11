#include <stdio.h>

/**
 * main - entry point
 * printing all possible combinations of single-digit numbers
 * Return: always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		putchar(x);
		putchar(' ');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
