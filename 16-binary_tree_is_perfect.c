#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (binary_tree_height(tree->right) == binary_tree_height(tree->left))
		return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));

	return (0);
}
