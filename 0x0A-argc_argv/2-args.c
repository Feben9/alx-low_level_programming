#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that prints all the arguments it receives
 * @argc: count
 * @argv: string array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
