#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: head
 * @value: value to put into new node
 *
 * Return: The value of the new node or NULL if no new node
 * was created
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;
	newNode->left = newNode->right = NULL;

	return (newNode);
}
