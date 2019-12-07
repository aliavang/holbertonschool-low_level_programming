#include "binary_trees.h"
/**
 * binary_tree_delete - Delete entire binary tree
 * @tree: Pointer to tree root node
 *
 * Return: Void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
	}
	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
	}
	free(tree);
}
