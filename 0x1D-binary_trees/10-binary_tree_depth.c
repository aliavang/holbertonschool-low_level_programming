#include "binary_trees.h"
/**
 * binary_tree_depth - Measure depth of binary tree
 * @tree: Pointer to root node of tree
 *
 * Return: Depth of tree otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->parent == NULL)
	{
		return (depth);
	}
	if (tree->parent != NULL)
	{
		depth = 1 + binary_tree_depth(tree->parent);
	}
	return (depth);
}
