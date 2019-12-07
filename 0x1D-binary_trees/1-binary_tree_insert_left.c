#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert node as left-child
 * @parent: Pointer to parent node
 * @value: Value of new node
 *
 * Return: Pointer to new node or NULL if failed
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *tmp;

	if (parent == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	if (parent->left == NULL)
	{
		parent->left = new;
	}
	else
	{
		tmp = parent->left;
		parent->left = new;
		new->left = tmp;
		tmp->parent = new;
	}
	return (new);
}
