#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * printing all the numbers of base 16 in lowercase
 * Return: always 0 (success)
 */
int main(void)
{
	int b16_1to9;
	int b16_atof;

	for (b16_1to9 = 0; b16_1to9 <= 9; b16_1to9++)
	{
		putchar(b16_1to9);
	}
	for (b16_atof = 'a'; b16_atof <= 'f'; b16_atof++)
	{
		putchar(b16_atof);
	}
	putchar('\n');
	return (0);
}
