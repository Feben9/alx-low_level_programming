#include "lists.h"
/**
 * list_len - a function that returns the number of elements
 * in a linked list
 * @h: pointer to structure
 * Return: length
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
