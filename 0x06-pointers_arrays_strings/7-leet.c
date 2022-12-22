#include <stdio.h>
#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @str: a single entry string
 * Return: char
 */
char *leet(char *str)
{
	int i1 = 0;
	int i2;

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i1])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (str[i1] == leet[i2] || str[i1] - 32 == leet[i2])
				str[i1] = i2 + '0';
		}
		i1++;
	}
	return (str);
}
