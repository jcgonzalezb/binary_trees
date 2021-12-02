#include "binary_trees.h"

/**
 * binary_tree_balance - function that  measures the balance
 * factor of a binary tree.
 * @tree: Pointer to the tree node of the tree to measure the balance factor.
 * Return: If tree is NULL, the function must return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int hleft = 0;
	int hright = 0;

	if (!tree)
		return (0);

	if (tree->left)
		hleft = (int)binary_tree_balance(tree->left) + 1;

	if (tree->right)
		hright = (int)binary_tree_balance(tree->right) + 1;

	return (hleft - hright);
}
