#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that prints the number of arguments passed into it
 * @argc: count
 * @argv: string array of arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
