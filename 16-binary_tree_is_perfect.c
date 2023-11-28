#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL, return 0. Otherwise, return 1
 * if the tree is perfect, otherwise 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree)
	{
		int l_h, r_h;

		l_h = binary_tree_height(tree->left);
		r_h = binary_tree_height(tree->right);

		if (!tree->left && !tree->right)
			return (1);

		if (l_h == r_h && binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right))
			return (1);
	}
	return (0);
}

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
