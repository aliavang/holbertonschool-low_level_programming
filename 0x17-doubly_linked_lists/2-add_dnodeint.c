#include "lists.h"
/**
 * add_dnodeint - Add node at beginning of list
 * @head: Double pointer to head
 * @n: Value for n
 *
 * Return: Address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}
