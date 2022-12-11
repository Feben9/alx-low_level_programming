#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Printing the alphabet with putchar
 * Return: always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
