#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list
 *
 * @list: pointer to the list
 */

void insertion_sort_list(listint_t **list)
{
	/* make a copy of the list */
	listint_t *new, *copy, *current;

	current = *list;

	if (!list || !(*list)->next)
		return;
	/* traverse the new list */
	while (current->next)
	{
		/* compare the 1st element to element #0 */
		if (current->next->n < current->n)
		{
			copy = current;
			new = current->next;
			new->prev = copy->prev;
			if (new->prev)
			{
				new->prev->next = new;
			}
			copy->next = new->next;
			if (copy->next)
			{
				copy->next->prev = copy;
			}
			copy->prev = new;
			new->next = copy;
			while (copy->prev)
			{
				copy = copy->prev;
			}
			*list = copy;
			print_list(*list);
			current = *list;
		}
		else
		{
			current = current->next;
		}
	}
}
