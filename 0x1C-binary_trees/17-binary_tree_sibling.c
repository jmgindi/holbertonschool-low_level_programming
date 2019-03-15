#include "binary_trees.h"

/**
 * binary_tree_sibling - returns sibling of node
 * @node: node to find sibling of
 *
 * Return: pointer to sibling node, NULL on failure
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	if (node->parent->right == node)
		return (node->parent->left);
	return (NULL);
}
