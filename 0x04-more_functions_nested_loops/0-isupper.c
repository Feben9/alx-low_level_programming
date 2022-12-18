#include <stdio.h>
#include "main.h"
/**
 * _isupper - a function to determine if a character is uppercase
 * @c: an single entry digit
 * Return: 1 for success 0 for failure
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
