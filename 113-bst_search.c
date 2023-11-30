#include "binary_trees.h"

/**
* bst_search - Search for a specific value in the tree and return the node.
* @tree: Tree to traverse.
* @value: Value to search for.
*
* Return: The node with the value or NULL if the value is not in the tree.
*/
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *res = NULL;

	if (tree == NULL)
	{
		return (NULL);
	}

	if (value < tree->n)
	{
		res = bst_search(tree->left, value);
	}
	else if (value > tree->n)
	{
		res = bst_search(tree->right, value);
	}
	else if (value == tree->n)
	{
		res = (bst_t *)tree;
	}

	return (res);
}
