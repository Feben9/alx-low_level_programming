#include "lists.h"
/**
 * reverse_listint -  a function to reverse the order of nodes
 * in listint_t list
 * @head: pointer to first node
 * Return: first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = NULL;

	while (head != NULL)
	{
		curr = *head->next;
		*head->next = prev;
		prev = *head;
		*head = curr;
	}
	*head = prev;
	return (*head);
}
