#include "lists.h"
/**
 * get_nodeint_at_index - Get node at nth index
 * @head: Pointer to head
 * @index: Index number
 *
 * Return: pointer to nth index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	tmp = head;
	i = 0;
	while (tmp != NULL && i < index)
	{
		i++;
		tmp = tmp->next;
	}
	if (index != i)
	{
		return (NULL);
	}
	return (tmp);
}
