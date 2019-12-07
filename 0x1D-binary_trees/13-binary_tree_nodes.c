#include "binary_trees.h"
/**
 * binary_tree_nodes - Cound nodes with at least 1 child in tree
 * @tree: Pointer to root node of tree
 *
 * Return: Count of node with child otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node;

	node = 0;
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	if (tree->left != NULL || tree->right != NULL)
	{
		node = binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + 1;
	}
	return (node);
}
