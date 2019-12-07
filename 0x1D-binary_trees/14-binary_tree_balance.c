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
	left_h = 1 + binary_tree_height(tree->left);
	right_h = 1 + binary_tree_height(tree->right);
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
/**
 * binary_tree_balance - Measure balance factor of binary tree
 * @tree: Pointer to root node of tree
 *
 * Return: Balance otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lh, rh;

	lh = 0;
	rh = 0;
	if (tree == NULL)
	{
		return (0);
	}
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);
	return (lh - rh);
}
