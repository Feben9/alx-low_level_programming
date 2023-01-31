#include "lists.h"
/**
 * sum_listint - a function that returns the sum of all the data (n) of a list
 * @head: pointer to struct
 * Return: sum of node data or 0
 */
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum = 0;

	ptr = head;

	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
