#include <stdio.h>
#include "main.h"
/**
 * create_array - that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: initializing character
 * Return: array characters or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	if (size > 0)
	{
		cr = malloc(sizeof(*cr) * size);
		for (i = 0; i < size; i++)
		{
			cr[i] = c;
		}
		return (cr);
	}
	else
		return (NULL);
}
