#include "binary_trees.h"
/**
* binary_tree_inorder - in-order traversal through tree
* @tree: pointer to root
* @func: pointer to func call each node
*
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree != NULL && func != NULL)
    {
        if (tree->left != NULL)
            binary_tree_inorder(tree->left, func);
        func(tree->n);
        if (tree->right != NULL)
            binary_tree_inorder(tree->right, func);
    }
}
