#include "lists.h"
/**
 * delete_nodeint_at_index - Delete node at nth index
 * @head: Pointer to pointer to head
 * @index: Nth node to delete
 *
 * Return: 1 if success, -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *current;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;
	i = 0;
	if (index == i)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (i < (index - 1))
	{
		tmp = tmp->next;
		i++;
		if (tmp == NULL)
		{
			return (-1);
		}
	}
	current = tmp;
	current = current->next;
	tmp->next = current->next;
	free(current);
	return (1);
}
