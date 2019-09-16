#include "lists.h"
/**
 * free_dlistint - Free list
 * @head: Pointer to head of list
 *
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free (current);
	}
}
