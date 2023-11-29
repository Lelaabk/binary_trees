#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of binary tree, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_h, r_h;

	if (tree)
	{
		l_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l_h > r_h) ? l_h : r_h);
	}
	return (0);
}

/**
 * binary_tree_levelorder - Traverses binary tree using level-order traversal.
 *
 * @tree: pointer to root node of tree to traverse.
 * @func: A pointer to a function to call for each node.
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_t **queue = malloc(sizeof(binary_tree_t *)
			* binary_tree_height(tree) + 1);
	if (queue == NULL)
		return;

	int front = 0, rear = 0;
	binary_tree_t *c;

	queue[rear++] = (binary_tree_t *)tree;

	while (front < rear)
	{
		c = queue[front++];

		func(c->n);

		if (c->left)
			queue[rear++] = c->left;
		if (c->right)
			queue[rear++] = c->right;
	}
	free(queue);
}
