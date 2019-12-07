#include "binary_trees.h"
/**
 * binary_tree_height - Measure height of binary tree
 * @tree: Pointer to root node of tree
 *
 * Return: Height of tree otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	left_h = 0;
	right_h = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left != NULL)
	{
		left_h = 1 + binary_tree_height(tree->left);
	}
	if (tree->right != NULL)
	{
		right_h = 1 + binary_tree_height(tree->right);
	}
	if (left_h > right_h)
	{
		return (left_h);
	}
	else
	{
		return (right_h);
	}
	return (0);
}
