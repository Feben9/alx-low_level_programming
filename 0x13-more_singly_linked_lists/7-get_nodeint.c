#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of a list
 * @head: pointer to struct
 * @index: nth node index
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count = 0;
	ptr = head;

	while(count != index)
	{
		if (ptr == NULL)
			return (NULL);
		ptr = ptr->next;
		count++;
	}
	head = ptr;
	return (head);
}
