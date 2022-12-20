#include <stdio.h>
#include <stdlib.h>
/**
 * main - a function to print the integers 0-100
 * but Fizz for multiples of 3, Buzz for multiples of 5
 * and FizzBuzz for multiples of both
 * Return: always 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0)
			printf("Fizz ");
		else if (x % 5 == 0)
			printf("Buzz ");
		else if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%d ", x);
	}
	printf("\n");
	return (0);
}
