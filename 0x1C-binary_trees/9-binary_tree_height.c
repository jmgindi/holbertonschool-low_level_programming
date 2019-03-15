#include "binary_trees.h"

/**
 * binary_tree_height - returns height of tree from node
 * @tree: tree to calculate height of
 *
 * Return: height of tree from node
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_r, height_l, h;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);

	if (height_l >= height_r)
		h = height_l;
	else
		h = height_r;

	return (h + 1);
}
