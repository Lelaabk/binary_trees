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
	new = pv->left;
	pv->left = tree;
	tree->right = new;

	if (new != NULL)
		new->parent = tree;

	new = tree->parent;
	tree->parent = pv;
	pv->parent = new;
	if (new != NULL)
	{
		if (new->left == tree)
			new->left = pv;
		else
			new->right = pv;
	}

	return (pv);
}
