#include "binary_trees.h"

/**
 *binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the nodes.
 *
 * Return: If tree is Null, function must return 0, else return number of
 * nodes with at least 1 child in binary tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right) + 1);

	return (0);
}
