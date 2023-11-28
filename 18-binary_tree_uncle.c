#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree.
 * @node: A pointer to the node to find the uncle.
 *
 * Return: pointer to uncle node, or NULL if no uncle is found.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent)
	{
		if (node->parent->parent->left && node->parent->parent->right)
		{
			if (node->parent == node->parent->parent->left)
				return (node->parent->parent->right);
			else
				return (node->parent->parent->left);
		}
	}
	return (NULL);
}
