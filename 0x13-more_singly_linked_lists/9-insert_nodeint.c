#include "lists.h"
/**
 * insert_nodeint_at_index - Insert new node at nth index
 * @head: Pointer to pointer to head
 * @idx: Nth index
 * @n: N value
 *
 * Return: Address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i;

	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}
	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (tmp != NULL && i < (idx - 1))
	{
		tmp = tmp->next;
		i++;
	}
	if ((idx - 1) != i)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = tmp->next;
	tmp->next = new;
	if (*head == NULL && idx == 0)
	{
		new->next = head;
		*head = new;
		return (*head);
	}
	return (new);
}
