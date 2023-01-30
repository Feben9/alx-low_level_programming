#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at
 * the beginning of a list
 * @head: pointer to structure
 * @n: integer
 * Return: the address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;
	/* unsigned int length = 0; */

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->n = n;

	if (*head != NULL)
	{
		newNode->next = *head;
	}
	if (*head == NULL)
	{
		newNode->next = NULL;
	}
	*head = newNode;
	return (*head);
}
