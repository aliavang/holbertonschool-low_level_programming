#include "binary_trees.h"
/**
 * binary_tree_preorder - Go through binary tree using pre-order traversal
 * @tree: Pointer to root of tree
 * @func: Print function from main
 *
 * Return: Void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	(*func)(tree->n);
	binary_tree_preorder(tree->left, (*func));
	binary_tree_preorder(tree->right, (*func));
}
