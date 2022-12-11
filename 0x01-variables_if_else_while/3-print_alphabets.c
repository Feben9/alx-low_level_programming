#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * printing the alphabet with putchar
 * in lowercase and uppercase
 * Return: always 0 (success)
 */
int main(void)
{
	int lowercase;
	int uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
