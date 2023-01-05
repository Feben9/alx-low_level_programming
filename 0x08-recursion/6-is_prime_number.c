#include <stdio.h>
#include "main.h"
/**
 * prime_detector - a function to differentiates
 * prime numbers
 * @m: int
 * @i: int
 * Return: int
 */
int prime_detector(int m, int i)
{
	int flag = 1;

	if (m < 2 || m % i == 0)
		flag = 0;
	if (i <= m / 2)
		prime_detector(m, i + 1);
	if (flag == 1)
		return (1);
	else
		return (0);
}

/**
 * is_prime_number -  a function to separate prime numbers
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	return (prime_detector(n, 2));
}
