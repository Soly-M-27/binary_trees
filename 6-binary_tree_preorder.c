#include "binary_trees.h"

/**
 * binary_tree_preorder - Write a function that goes through a
 * binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 *
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree != NULL && func != NULL)
	{
		func(tree->n);
		/* This allows the print_num function from main */
		/* to exist within this function and prints the number stored within */
		/* the variables n of the struct which holds all ints entering */
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
