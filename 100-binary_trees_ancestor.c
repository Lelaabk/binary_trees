#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds lowest common ancestor of two nodes.
 *
 * @first: pointer to the first node.
 * @second: pointer to the second node.
 *
 * Return: pointer to lowest common ancestor node.
 * otherwise return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *one, *two;

	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	one = first->parent, two = second->parent;
	if (first == two || !one || (!one->parent && two))
		return (binary_trees_ancestor(first, two));
	else if (one == second || !two || (!two->parent && one))
		return (binary_trees_ancestor(one, second));
	return (binary_trees_ancestor(one, two));
}
