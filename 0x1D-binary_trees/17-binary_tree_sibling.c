#include "binary_trees.h"
/**
 * binary_tree_sibling - Find sibling of node
 * @node: Pointer to node
 *
 * Return: Pointer to sibling of node otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *finder;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == NULL || node->parent->right == NULL)
	{
		return (NULL);
	}
	finder = node->parent;
	if (finder->right->n == node->n)
	{
		return (finder->left);
	}
	else
	{
		return (finder->right);
	}
}
