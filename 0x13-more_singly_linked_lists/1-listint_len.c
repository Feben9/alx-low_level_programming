#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * in a linked list
 * @h: pointer to structure
 * Return: length
 */
size_t listint_len(const listint_t *h)
{
	unsigned int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
