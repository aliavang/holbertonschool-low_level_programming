#include "lists.h"
/**
 * add_nodeint_end - Add new node at end of list
 * @head: Pointer to pointer to head
 * @n: Value for n in node
 *
 * Return: Address to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	last = *head;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	last = last->next;
	return (last);
}
