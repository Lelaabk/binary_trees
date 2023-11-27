#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_t *binary_tree_node - function that creates binary tree node
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
*/


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode != NULL)
	{
		newNode->parent = parent;
		newNode->n = value;
		newNode->left = NULL;
		newNode->right = NULL;

		return (newNode);
	}
	else
		return (NULL);
	/*free(newNode);*/
}
