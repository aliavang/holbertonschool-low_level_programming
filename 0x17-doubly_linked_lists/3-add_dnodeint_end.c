#include "lists.h"
/**
 * add_dnodeint_end - Add new node at end of list
 * @head: Double pointer to head
 * @n: Value of n in node
 *
 * Return: Address of new node if success, otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->prev = current;
	current = current->next;
	return (current);
}
