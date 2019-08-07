#include "lists.h"
/**
 * pop_listint - Delete head node and return its data
 * @head: Pointer to pointer to head
 *
 * Return: Data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
	{
		return (0);
	}
	tmp = *head;
	*head = (*head)->next;
	free (tmp);
	return (tmp->n);
}
