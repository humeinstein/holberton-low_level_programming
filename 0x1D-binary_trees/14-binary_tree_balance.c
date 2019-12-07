#include "binary_trees.h"
/**
* binary_tree_height - gets height of btree 
* @tree: root node of btree
* @return: height of btree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t leftsz = 0, rightsz = 0;

    if (tree == NULL)
        return (0);
    if (tree->left || tree->right)
    {
        leftsz = binary_tree_height(tree->left);
        rightsz = binary_tree_height(tree->right);
        if (rightsz > leftsz)
            return (rightsz + 1);
        else
        {
            return (leftsz + 1);
        }
    }
    return (0);
}
/**
* binary_tree_balance - measures the balance factor of btree
* @tree: pointer to root node of btree
* Return: balance 
*
*/
int binary_tree_balance(const binary_tree_t *tree)
{
    int rtree, ltree;

    if (tree == NULL)
        return (0);
    ltree = binary_tree_height(tree->left);
    rtree = binary_tree_height(tree->right);
    return (ltree - rtree);
}
