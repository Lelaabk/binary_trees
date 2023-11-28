#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree.
 * @node: A pointer to the node to find the sibling.
 *
 * Return: pointer to siblings node, or NULL if no sibling is found.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node == node->parent->left)
			return (node->parent->right);
		else
			return (node->parent->left);
	}
	return (NULL);
}
