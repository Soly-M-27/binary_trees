#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int x = 0;

	if (tree == NULL)
		return (0);

	if (tree->right && tree->left)
	{
		x += 1;
		if (tree->right->left || tree->right->right)
			x -= 1;
	}

	return (x);
}
