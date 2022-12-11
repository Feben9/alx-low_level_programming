#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*Import the standard library and time header files to program*/

/**
 * main - entry point
 * Printing the last digit of a number
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is", n);
	int last_digit;

	last_digit = n % 10;
	printf("%d ", last_digit);
	if (last_digit > 5)
		printf("and is greater than 5\n");
	if (last_digit == 0)
		printf("and is 0\n");
	if (last_digit < 6 && last_digit != 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
