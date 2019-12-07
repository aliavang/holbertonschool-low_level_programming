#include "binary_trees.h"
/**
 * binary_tree_size - Measure size of binary tree
 * @tree: Pointer to root node of tree
 *
 * Return: Size of binary tree otherwise 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t si;

	if (tree == NULL)
	{
		return (0);
	}
	si = (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	return (si);
}
