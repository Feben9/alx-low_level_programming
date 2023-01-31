#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: pointer
 * Return: the head node data or 0
 */
int pop_listint(listint_t **head)
{
	listint_t *new, *temp;
	int new_n;

	new = *head;

	if (new == NULL)
		return (0);
	else
	{
		new_n = new->n;
		temp = new->next;
		free(new);
		*head = temp;
		return (new_n);
	}
}
