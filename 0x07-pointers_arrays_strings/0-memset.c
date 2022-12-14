#include <stdio.h>
#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: byte
 * Return: a ptr to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
