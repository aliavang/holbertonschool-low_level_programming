#include "lists.h"
/**
 * delete_dnodeint_at_index - Delete node at nth index
 * @head: Double pointer to head of list
 * @index: Index to delete node
 *
 * Return: 1 if success, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	i = 0;
	while (current != NULL && i < (index - 1))
	{
		current = current->next;
		i++;
	}
	if (i != (index - 1))
	{
		return (-1);
	}
	tmp = current;
	tmp = current->next;
	current->next = tmp->next;
	current->prev = tmp->prev;
	free(tmp);
	return (1);
}
