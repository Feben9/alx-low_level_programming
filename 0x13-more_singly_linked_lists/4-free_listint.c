#include "lists.h"
/**
 * free_listint - a function that frees a list
 * @head: a list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
