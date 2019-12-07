#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Check if binary tree is perfect
 * @tree: Pointer to root node of tree
 *
 * Return: 1 if full otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l, r;

	if (tree == NULL)
	{
		return (0);
	}
	l = 1 + binary_tree_is_perfect(tree->left);
	r = 1 + binary_tree_is_perfect(tree->right);
	if (l == r)
	{
		return (1);
	}
	return (0);
}
