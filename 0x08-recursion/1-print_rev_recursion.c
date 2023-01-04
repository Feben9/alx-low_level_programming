#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - a function to print the reverse of a string
 * @s: a string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
