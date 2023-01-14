#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that multiplies two integers
 * @argc: count
 * @argv: string array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count, mul = 1;

	if (argc == 3)
	{
		for (count = 1; count < argc; count++)
		{
			mul = mul * atoi(argv[count]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
