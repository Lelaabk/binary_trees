#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#define MAX_QUEUE_SIZE 1024

/**
 * binary_tree_levelorder - Traverses binary tree using level-order traversal.
 *
 * @tree: pointer to root node of tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    int front = 0, rear = 0;
    const binary_tree_t *c;
    const binary_tree_t **queue = malloc(sizeof(const binary_tree_t *) * MAX_QUEUE_SIZE);

    if (tree == NULL || func == NULL || queue == NULL)
        return;

    queue[rear++] = tree;

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
