#include <stdio.h>
#include "main.h"
/**
 * _strcmp - a function to compare strings
 * @s1: a single entry
 * @s2: a single entry
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int y;

	while (s1[x] && s2[x])
	{
		if (s1[x] - s2[x] < 0)
		{
			y = s1[x] - s2[x];
			break;
		}
		if (s1[x] - s2[x] > 0)
		{
			y = s1[x] - s2[x];
			break;
		}
		if (s1[x] - s2[x] == 0)
		{
			y = s1[x] - s2[x];
		}
		x++;
	}
	return (y);
}
