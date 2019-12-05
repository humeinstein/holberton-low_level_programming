#include "binary_trees.h"
/**
* binary_tree_postorder - function that postorder traverses through btree
* @tree: pointer to root note of tree
* @func: ptr to function to call each node
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (tree != NULL && func != NULL)
    {
        if (tree->right != NULL)
            binary_tree_postorder(tree->left, func);
        if (tree->left != NULL)
            binary_tree_postorder(tree->right , func);
        func(tree->n);

    }
}
