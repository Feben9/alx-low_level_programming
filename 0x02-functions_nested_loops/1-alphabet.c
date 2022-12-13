#include <stdio.h>
#include "main.h"
/**
 * print_alphabet is a function to print
 * the lowercase alphabet
 * Return: void
 */
void print_alphabet(void) /*function to print letters*/
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return (void);
}
