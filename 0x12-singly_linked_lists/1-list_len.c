#include "lists.h"
/**
 * list_len - Print number of elements in node in linked list
 * @h: Pointer to first node
 *
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
