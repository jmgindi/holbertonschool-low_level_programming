#include "binary_trees.h"

/**
 * binary_tree_size - calculates size from root
 * @tree: pointer to root from which to measure
 *
 * Return: size, 0 if NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
