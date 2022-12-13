#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - a function to print the last digit of a number
 * @x: a single entry number
 * Return: always 1
 */
int print_last_digit(int x)
{
	int y;

	y =  x % 10;
	_putchar(y);
	return (0);
}
