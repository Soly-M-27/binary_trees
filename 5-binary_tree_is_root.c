#include "binary_trees.h"

/**
 * binary_tree_is_root - Write a function that checks if a
 * node is a root
 * @node: pointer to the node to check
 *
 * Return: 1 if true, 0 if false
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right != NULL || node->left != NULL)
		return (1);
}
