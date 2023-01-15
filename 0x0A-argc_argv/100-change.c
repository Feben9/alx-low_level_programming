#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: count
 * @argv: string array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 1, total, amt;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[count]) < 0)
	{
		printf("0\n");
		return (0);
	}
	amt = atoi(argv[count]);
	total = amt / 25;
	amt = amt % 25;
	total += amt / 10;
	amt = amt % 10;
	total += amt / 5;
	amt = amt % 5;
	total += amt / 2;
	amt = amt % 2;
	total += amt / 1;

	printf("%d\n", total);
	return (0);
}
