#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * Return: Height of a binary tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0;
	size_t height_right = 0;

	if (tree == NULL)
		return (0);

	else
	{
		if (tree->left)
			height_left = binary_tree_height(tree->left) + 1;

		if (tree->right)
			height_right = binary_tree_height(tree->right) + 1;

		if (height_left >= height_right)
			return (height_left);
		return (height_right);
	}
}

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
		hleft = (int)binary_tree_height(tree->left) + 1;

	if (tree->right)
		hright = (int)binary_tree_height(tree->right) + 1;

	return (hleft - hright);
}
