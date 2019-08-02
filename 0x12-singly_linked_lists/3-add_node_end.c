#include "lists.h"
/**
 * add_node_end - Add node at end of list
 * @head: Pointer to pointer pointing to head
 * @str: String to place into str field
 *
 * Return: Address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	last = *head;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	last = last->next;
	return (last);
}
