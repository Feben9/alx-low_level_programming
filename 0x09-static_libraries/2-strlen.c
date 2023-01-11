#include <stdio.h>
#include "main.h"
/**
 * _strlen - a function that returns the length of a string
 * @s: a single entry
 * Return: the length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(++s));
}
