#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position
 * @head: head of a list
 * @idx: index or position of new node
 * @n: node data
 * Return: new node address or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = *head;
	listint_t *ptr2 = malloc(sizeof(listint_t));
	unsigned int i = 1;

	ptr2->n = n;
	ptr2->next = NULL;

	if (idx == 0)
	{
		ptr2->next = *head;
		*head = ptr2;
	}

	while (i < idx)
	{
		ptr = ptr->next;
		i++;
	}

	ptr2->next = ptr->next;
	ptr->next = ptr2;

	return (ptr2);
}
