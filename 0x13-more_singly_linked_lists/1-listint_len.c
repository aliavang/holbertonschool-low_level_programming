#include "lists.h"
/**
 * listint_len - Find number of elements in node
 * @h: Pointer to list
 *
 * Return: Number of elements in node
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
