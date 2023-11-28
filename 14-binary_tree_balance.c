#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of binary tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_h = 0, r_h = 0;

	if (tree)
	{
		l_h = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r_h = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l_h > r_h) ? l_h : r_h);
	}
	return (0);
}

/**
 * binary_tree_balance - Measures balance factor of binary tree.
 * @tree: A pointer to the root node of tree to measure balance factor.
 *
 * Return: If tree is NULL, return 0, else return the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		int l_h = binary_tree_height(tree->left);
		int l_r = binary_tree_height(tree->right);

		return (l_h - l_r);
	}
	return (0);
}
