#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert node as right-child
 * @parent: Pointer to parent node
 * @value: Value of new node
 *
 * Return: Pointer to new node otherwise NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right == NULL)
	{
		parent->right = new;
	}
	else
	{
		tmp = parent->right;
		parent->right = new;
		new->left = tmp;
		tmp->parent = new;
	}
	return (new);
}
