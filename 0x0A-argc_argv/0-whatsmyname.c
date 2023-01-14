#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - a program that prints its name, followed by a new line
 * @argc: count
 * @argv: string array of arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf(".%s\n", argv[0]);
	return (0);
}
