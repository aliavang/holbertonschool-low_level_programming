#include "binary_trees.h"
/**
 * binary_tree_uncle - Find uncle of a node
 * @node: Pointer to node
 *
 * Return: Pointer to uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *finder;

	if (node == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == NULL || node->parent->right == NULL)
	{
		return (NULL);
	}
	finder = node->parent->parent;
	if (finder->left->n == node->parent->n)
	{
		return (finder->right);
	}
	else
	{
		return (finder->left);
	}
}
