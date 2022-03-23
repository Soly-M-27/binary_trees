#include "binary_trees.h"

/**
 * binary_tree_insert_right - Write a function that inserts a
 * node as the left-child of another node
 * @parent: pointer to node to insert left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to created node, or NULL if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);

	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	parent->right = newNode;

	return (newNode);
}

