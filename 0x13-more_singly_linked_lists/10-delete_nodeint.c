#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a list
 * @head: head of a list
 * @index: index to be deleted
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = *head;
	listint_t *ptr2 = *head;
	unsigned int i = 1;

	if (ptr == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = ptr->next;
		free(ptr);
		ptr = NULL;
	}
	else
	{
		while (i < index)
		{
			ptr2 = ptr;
			ptr = ptr->next;
			i++;
		}
		ptr2->next = ptr->next;
		free(ptr);
		ptr = NULL;
	}
	return (1);
}
