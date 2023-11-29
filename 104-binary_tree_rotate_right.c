#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs right-rotation on binary tree.
 * @tree: pointer to root node of tree to rotate.
 *
 * Return: pointer to the new root node of the tree once rotated.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new, *pv;

	if (tree == NULL || tree->left == NULL)
		return (NULL);

	pv = tree->left;
	new = pv->right;
	pv->right = tree;
	tree->left = new;

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
