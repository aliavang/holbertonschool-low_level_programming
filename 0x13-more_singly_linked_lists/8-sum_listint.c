#include "lists.h"
/**
 * sum_listint - Sum of all data in list
 * @head: Pointer to head of list
 *
 * Return: Sum of all n value
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
	{
		return (0);
	}
	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
