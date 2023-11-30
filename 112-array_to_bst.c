#include "binary_trees.h"

/**
* array_to_bst - Turns an array into a Binary Search Tree (BST).
* @array: Array to turn into a BST.
* @size: Size of the array.
*
* Return: Root of the BST, or NULL on failure.
*/
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i = 0;

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		bst_insert(&root, array[i]);
		i++;
	}

	return (root);
}
