#include "lists.h"
/**
 * free_listint - Free list
 * @head: Pointer to head
 *
 * Return: Void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
