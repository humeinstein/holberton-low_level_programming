#include "binary_trees.h" 
/**
* binary_tree_preorder - pre-order traversal through tree
* @tree: pointer to root
* @func: pointer to func that calls node
*
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree != NULL && func != NULL)
    {
        func(tree->n);
        if (tree->left != NULL)
            binary_tree_preorder(tree->left, func);
        if (tree->right != NULL)
            binary_tree_preorder(tree->right, func);
    }
}
