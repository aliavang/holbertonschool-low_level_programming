#include "lists.h"
/**
 * print_dlistint - Print elements in list
 * @h: Pointer to head of list
 *
 * Return: Number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}
	return (count);
}
