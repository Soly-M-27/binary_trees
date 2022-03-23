#include "binary_trees.h"

/**
 * binary_tree_insert_left - Write a function that inserts a
 * node as the left-child of another node
 * @parent: pointer to node to insert left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to created node, or NULL if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;

	if (newNode == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	parent->left = newNode;

	return (newNode);
}
