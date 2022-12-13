#include <stdio.h>
#include "main.h"
/**
 * _abs - a function to display the
 * absolute value of a number
 * @a: a single digit entry
 * Return: always 1 (success)
 */
int _abs(int a)
{
	return (a * ((a > 0) - (a < 0)));
}
