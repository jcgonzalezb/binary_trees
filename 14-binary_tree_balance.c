#include "binary_trees.h"

/**
 * binary_tree_balance - function that  measures the balance
 * factor of a binary tree.
 * @tree: Pointer to the tree node of the tree to measure the balance factor.
 * Return: If tree is NULL, the function must return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if ((tree->left != NULL && tree->right == NULL) ||
	    (tree->left == NULL && tree->right != NULL) ||
	    (tree->left != NULL && tree->right != NULL))
		return (1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right));
	else
	{
		return (binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
	}
}
