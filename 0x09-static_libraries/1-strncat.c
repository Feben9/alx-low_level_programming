#include <stdio.h>
#include "main.h"
/**
 * _strncat - a function that concatenates two strings with
 * n byte maximum
 * @dest: a single entry
 * @src: a single entry
 * @n: a single entry
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y;

	while (dest[x] != '\0')
	{
		++x;
	}
	for (y = 0; src[y] != '\0'; ++y, ++x)
	{
		if (y <= n - 1)
			dest[x] = src[y];
	}
	return (dest);
}
