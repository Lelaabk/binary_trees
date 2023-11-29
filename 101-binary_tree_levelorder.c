#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_levelorder - function that goes through
 * a binary tree using level-order traversal
 * @tree: tree
 * @func: printing function
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height = binary_tree_height(tree);
	size_t i;

	if (!tree || !func)
		return;


	for (i = 1; i <= height + 1; i++)
		binary_tree_levelorder_util(tree, func, i);
}

/**
 * binary_tree_levelorder_util - Helper function for level-order traversal
 * @tree: tree
 * @func: printing function
 * @level: level to traverse
 */
void binary_tree_levelorder_util(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (!tree)
		return;

	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		binary_tree_levelorder_util(tree->left, func, level - 1);
		binary_tree_levelorder_util(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of binary tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return (l_height > r_height ? l_height + 1 : r_height + 1);
}
