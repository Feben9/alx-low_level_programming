#include <stdio.h>
#include "main.h"
/**
 * _strcat -  a function that concatenates two strings
 * @dest: a single entry
 * @src: a single entry
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		++i;
	}
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
