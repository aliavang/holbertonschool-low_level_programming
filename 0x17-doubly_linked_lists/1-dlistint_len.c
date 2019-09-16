#include "lists.h"
/**
 * dlistint_len - Find length of list
 * @h: Pointer to head of list
 *
 * Return: Length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count += 1;
	}
	return (count);
}
