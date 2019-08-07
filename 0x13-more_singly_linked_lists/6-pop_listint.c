#include "lists.h"
/**
 * pop_listint - Delete head node and return its data
 * @head: Pointer to pointer to head
 *
 * Return: Data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp, *data;

	if (head == NULL)
	{
		return (0);
	}
	tmp = *head;
	data = tmp;
	*head = (*head)->next;
	free(tmp);
	return (data->n);
}
