#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert node at nth index
 * @h: Double pointer to head of list
 * @idx: Nth index
 * @n: N value
 *
 * Return: Address of new node if success, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i;

	if (*h == NULL && idx != 0)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	current = *h;
	i = 0;
	while (current != NULL && i < (idx - 1))
	{
		i++;
		current = current->next;
	}
	if (i != (idx - 1))
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	new->prev = current;
	current->next = new;
	return (new);
}
