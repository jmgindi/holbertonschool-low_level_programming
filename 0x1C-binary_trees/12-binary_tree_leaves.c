#include "binary_trees.h"

/**
 * binary_tree_leaves - counts number of leaves connected to root
 * @tree: pointer to root to count from
 *
 * Return: number of leaves from root
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	else
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
