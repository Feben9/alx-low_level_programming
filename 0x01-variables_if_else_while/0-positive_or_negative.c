#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* import the standard library and time header files */
/**
 * main - entry point
 * a program to determine whether a number is positive, negative or zero
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
