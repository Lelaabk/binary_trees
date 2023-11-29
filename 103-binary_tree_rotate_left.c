#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs left-rotation on binary tree.
 * @tree: pointer to root node of tree to rotate.
 *
 * Return: pointer to the new root node of the tree once rotated.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new, *pv;

	if (tree == NULL || tree->right == NULL)
		return (NULL);

	pv = tree->right;
	new = pv;
	tree->right = pv->left;

	if (pv->left != NULL)
		pv->left->parent = tree;

	pv->left = tree;
	pv->parent = tree->parent;
	tree->parent = pv;

	return(new);
}
