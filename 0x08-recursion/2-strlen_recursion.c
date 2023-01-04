#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - a function to count the length of a string
 * @s: a string
 * Return: size of string
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s)
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	return (i);
}
