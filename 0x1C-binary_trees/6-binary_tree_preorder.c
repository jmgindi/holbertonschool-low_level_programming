#include "binary_trees.h"

/**
 * binary_tree_preorder - prints using preorder
 * @tree: pointer to root of tree to print
 * @func: function to print with
 */

void binary_tree_preorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
