#include <stdio.h>
/**
 * _isdigit - a function to check if a character is a single digit number
 * @c : a single entry
 * Return: 1 if digit 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
