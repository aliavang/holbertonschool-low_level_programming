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

	if (head == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
