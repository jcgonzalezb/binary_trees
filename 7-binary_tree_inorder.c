#include "binary_trees.h"

/**
 * binary_tree_inorder - function that goes through a binary tree using
 * in-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	printf("%d\n", tree->n);
	binary_tree_inorder(tree->right, func);
}