#include "binary_trees.h"

/**
 * binary_tree_height - returns height of tree from node
 * @tree: tree to calculate height of
 *
 * Return: height of tree from node
 */

int binary_tree_height_int(const binary_tree_t *tree)
{
        int height_r, height_l, h;

        if (tree == NULL)
                return (-1);

        height_l = binary_tree_height_int(tree->left);
        height_r = binary_tree_height_int(tree->right);

        if (height_l >= height_r)
                h = height_l;
        else
                h = height_r;

        return (h + 1);
}

/**
 * binary_tree_balance - returns balance factor of tree at node
 * @tree: tree to calculate balance factor of
 *
 * Return: balance factor of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_r, height_l;

	height_r = binary_tree_height_int(tree->right);
	height_l = binary_tree_height_int(tree->left);

	return (height_l - height_r);
}
