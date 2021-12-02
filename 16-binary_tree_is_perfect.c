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
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 * Return: If tree is NULL, the function must return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	else
	{
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
	}
}

/**
 * binary_tree_is_perfect - function that checks
 * if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if null, otherwise 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0;
	int left_size = 0;
	int right_height = 0;
	int right_size = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	if (left_height == right_height)
	{
		if (left_size == right_size)
			return (1);
	}
	return (0);
}
