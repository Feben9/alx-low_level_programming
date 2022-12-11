#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * printing single digit numbers with putchar
 * and without char type
 * Return: always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 10; x++)
	{
		putchar((x % 10) + '0');
	}
	putchar('\n');
	return (0);
}
