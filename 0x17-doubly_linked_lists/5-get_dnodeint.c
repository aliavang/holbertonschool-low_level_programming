#include "lists.h"
/**
 * get_dnodeint_at_index - Get node at index n
 * @head: Pointer to head of list
 * @index: Index n
 *
 * Return: Pointer to node at index n
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (head != NULL && i < index)
	{
		i++;
		head = head->next;
	}
	if (i != index)
	{
		return (NULL);
	}
	return (head);
}
