#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: Array containing elements
 * @size: number of elements in array
 * @cmp: function which compare values
 *
 * Return: pointer or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array && cmp)
	{
		for (; index < size; index++)
		{
			if (cmp(array[index]) != 0)
				return (index);
		}
	}
	return (-1);
}
