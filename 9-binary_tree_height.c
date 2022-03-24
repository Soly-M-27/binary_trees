#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t iz, der;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	iz = binary_tree_height(tree->left);
	der = binary_tree_height(tree->right);

	if (iz >= der)
		return (iz + 1);
	return (der + 1);

}
