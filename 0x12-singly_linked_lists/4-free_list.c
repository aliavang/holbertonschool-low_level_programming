#include "lists.h"
/**
 * free_list - Free list
 * @head: Pointer to list
 *
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (h != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
