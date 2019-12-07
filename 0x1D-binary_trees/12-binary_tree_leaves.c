#include "binary_trees.h"
/**
 * binary_tree_leaves - Count the leaves in binary tree
 * @tree: Pointer to root node of tree
 *
 * Return: Leaves otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l;

	l = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	l = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (l);
}
