#include <stdio.h>
#include "main.h"
/**
 * helper - a function to check natural squares
 * @c: int
 * @i: int
 * Return: sqrt
 */
int helper(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (helper(c, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - a function that returns the
 * natural square root of a number
 * @n: int
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
