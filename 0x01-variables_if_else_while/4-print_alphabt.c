#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * printing the alphabet with putchar
 * except q and e
 * Return: always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e')
			continue;
		if (x == 'q')
			continue;
		putchar(x);

	}
	putchar('\n');
	return (0);
}
