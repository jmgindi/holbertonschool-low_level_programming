#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child
 * @parent: parent node for child
 * @value: value to insert
 *
 * Return: pointer to new node, NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = malloc(sizeof(binary_tree_t));

	if (!newnode)
		return (NULL);

	if (!parent)
		return (NULL);

	newnode->right = parent->right;
	parent->right = newnode;
	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;

	if (newnode->right)
		newnode->right->parent = newnode;

	return (newnode);
}
