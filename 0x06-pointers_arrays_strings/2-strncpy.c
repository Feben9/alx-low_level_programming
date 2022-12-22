#include <stdio.h>
#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: a single entry
 * @char: a single entry
 * @n: a single entry
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (src[x++])
		y++;

	x = 0;
	while (src[x] && x < n)
	{
		dest[x] = src[x];
		x++;
	}

	x = y;
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
