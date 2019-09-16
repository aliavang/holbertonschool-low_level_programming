#include "lists.h"
/**
 * sum_dlistint - Sum of n value in all nodes
 * @head: Pointer to head of list
 *
 * Return: Sum of all n values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
