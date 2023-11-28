#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of binary tree.
 * @tree: A pointer to root node to measure the size.
 *
 * Return: if tree is NULL, function must return 0, else return size.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
