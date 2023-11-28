#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL, return 0. Otherwise, return 1 if the tree is full,
 * otherwise 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);

		if ((!tree->left && tree->right) ||
				(tree->left && !tree->right))
			return (0);

		return (binary_tree_is_full(tree->left) &&
				binary_tree_is_full(tree->right));
	}
	return (0);
}
