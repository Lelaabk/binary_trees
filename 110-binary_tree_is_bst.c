#include "binary_trees.h"
#include <limits.h>

/**
* binary_tree_is_bst - Checks if a binary tree is a valid Binary Search Tree
* @tree: Pointer to the root node of the tree to check
*
* Return: 1 if tree is a valid BST, 0 otherwise
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_bst_util(tree, INT_MIN, INT_MAX));
}

/**
* is_bst_util - Helper function for checking if a binary tree is a valid BST
* @node: Current node being checked
* @min: The minimum value a node in the subtree can have
* @max: The maximum value a node in the subtree can have
*
* Return: 1 if the subtree rooted at 'node' is a valid BST, 0 otherwise
*/
int is_bst_util(const binary_tree_t *node, int min, int max)
{
	if (!node)
		return (1);

	if (node->n <= min || node->n >= max)
		return (0);

	return (is_bst_util(node->left, min, node->n) &&
		is_bst_util(node->right, node->n, max));
}
