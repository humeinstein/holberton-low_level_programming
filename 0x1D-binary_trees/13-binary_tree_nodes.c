#include "binary_trees.h"
/**
* binary_tree_nodes - function that counts nodes with atleast 1 binary tree
* @tree: pointer to root node of tree
* Return: how many nodes with atleast 1 btree 
*
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodec = 0;

    if (tree == NULL)
        return (0);
    if (tree->left == NULL && tree->right == NULL)
        return (0);

    nodec = (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

    return (nodec);
}
