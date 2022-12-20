#include <stdio.h>
#include "main.h"
/**
 * _strcpy - a function that prints n elements of an array of integers
 * @dest: a single entry
 * @src: a single entry
 * Return: a string
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i]
	} while (src[i] != '\0');
	return (dest);
}
