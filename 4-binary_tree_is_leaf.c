#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Write a function that checks if a
 * node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if true, 0 if false
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int x = 0;

	if (node == NULL)
		return (0);

	if ((node != NULL) && (node->right == NULL) && (node->left == NULL))
		x = 1;

	return (x);
}
