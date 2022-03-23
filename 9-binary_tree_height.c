#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t x = 0;

	if (tree == NULL)
		return (0);

	if (tree != NULL)
	{
		if (tree->right != NULL)
			x += 1;
		if (tree->left != NULL)
			x += 1;
	}

	return (x);
}
