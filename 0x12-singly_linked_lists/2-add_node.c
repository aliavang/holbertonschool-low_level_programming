#include "lists.h"
/**
 * _strlen - Finds the length of a string
 * @s: String to be evaluated
 *
 * Return: String length
 */
unsigned int _strlen(const char *s)
{
	unsigned int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * add_node - Add new node at beginning of list
 * @head: Pointer to pointer pointing to head
 * @str: String to place into str field
 *
 * Return: Pointer to list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
