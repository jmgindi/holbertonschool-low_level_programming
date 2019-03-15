#include "binary_trees.h"

/**
 * depth_left - returns depth of leaf farthest left
 * @tree: tree to check
 *
 * Return: depth of leaf on the left
 */

int depth_left(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}

/**
 * perfect_check - checks if a given tree is perfect
 * @tree: tree to check
 * @depth: depth of node to check
 * @l: level to check against
 *
 * Return: 1 if perfect, 0 if not
 */

int perfect_check(const binary_tree_t *tree, int depth, int l)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (depth == l + 1);

	if (!tree->left || !tree->right)
		return (0);

	return (perfect_check(tree->left, depth, l + 1) &&
		perfect_check(tree->right, depth, l + 1));
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: root of tree to check
 *
 * Return: 1 if perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = depth_left(tree);

	return (perfect_check(tree, d, 0));
}
