#include "binary_trees.h"

/**
* binary_tree_is_root - function that checks if node is root
* @node: the node to be checked
* Return: 1 if root 0 else
*
*/

int binary_tree_is_root(const binary_tree_t *node)
{
    if (node->parent)
    {
        return (0);
    }
    else
        return (1);
}
