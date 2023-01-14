#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - a program that adds positive numbers
 * @argc: count
 * @argv: string array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count, arr, sum = 0;

	for (count = 1; count < argc; count++)
	{
		for (arr = 0; argv[count][arr] != '\0'; arr++)
		{
			if (isdigit(argv[count][arr]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[count]);
	}
	printf("%d\n", sum);

	return (0);
}
