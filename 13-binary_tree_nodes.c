#include "binary_trees.h"

/**
 * binary_tree_nodes - function that that counts the nodes with
 * at least 1 child in a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * Return: If tree is NULL, the function must return 0.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right);
}
