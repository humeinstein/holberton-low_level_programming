#include "binary_trees.h"

/**
* binary_tree_insert_left - insert node left child
* @parent: pointer to the parent node
* @value: value
* Return: NULL or created node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new;

    
    new = binary_tree_node(parent, value);

    if (parent == NULL || new == NULL)
        return (NULL);

    if (parent->right != NULL)
    {
        new->right = parent->right;
        new->right->parent = new;
    }
    parent->right = new;
    return (new);
}
