#include "binary_trees.h"


/**
 * binary_tree_insert_right - function that
 * inserts a node as the right-child of another
 * node.
 * @parent:  Pointer to the parent node
 * @value: node value
 * Return: binary_tree_insert_right*
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right =  parent->right;

	if (parent->right != NULL)
	{
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
