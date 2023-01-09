#include <stdio.h>
#include "main.h"
/**
 * _isalpha - a function to check if a
 * character is alphabetic
 * @c: single letter input
 * Return: 1 for success 0 for failure
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
