#include "binary_trees.h"

/**
 * binary_tree_depth - calculates depth of a node
 * @tree: node to measure depth of
 *
 * Return: depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *temp = tree;

	if (tree == NULL)
		return (0);

	while (temp->parent)
	{
		depth += 1;
		temp = temp->parent;
	}

	return (depth);
}
