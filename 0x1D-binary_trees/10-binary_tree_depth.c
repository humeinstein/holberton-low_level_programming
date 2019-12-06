#include "binary_trees.h"
/**
*
* binary_tree_depth - function gets depth of node in btree
* @tree: pntr to root node of btree
* Return: depth of btree
*/
size_t binary_tree_depth(const binary_tree_t *node)
{
    size_t depth = 0;

    if (node == NULL)
        return (0);
    while (node->parent != NULL)
    {
        node = node->parent;
        depth++;
    }
    return (depth);
}
