#include "binary_trees.h"

/**
* binary_tree_t - a function that creates a binary tree node
* @parent: parent node
* @value: value
* Return: new bt node
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    new = malloc(sizeof(binary_tree_t));
    if (new == NULL)
    {
        return (NULL);
    }
    new->left = NULL;
    new->right = NULL;

    new->parent = parent;
    new->n = value;

    return (new);

}
