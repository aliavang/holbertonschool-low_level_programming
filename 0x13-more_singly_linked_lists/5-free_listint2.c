#include "lists.h"
/**
 * free_listint2 - Free list and set head to NULL
 * @head: Pointer to pointer pointing to head
 *
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (*head == NULL)
	{
		return;
	}
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
