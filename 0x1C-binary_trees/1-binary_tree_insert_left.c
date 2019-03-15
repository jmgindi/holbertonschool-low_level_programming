#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left child
 * @parent: parent node for child
 * @value: value to insert
 *
 * Return: pointer to new node, NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (!newnode)
		return (NULL);

	if (!parent)
		return (NULL);

	newnode->left = parent->left;
	parent->left = newnode;
	newnode->parent = parent;
	newnode->n = value;
	newnode->right = NULL;

	if (newnode->left)
		newnode->left->parent = newnode;

	return (newnode);
}
