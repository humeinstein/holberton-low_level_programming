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
* binary_tree_size - function measures size of BTREE
* @tree: pointer to root node of btree
* Return: size of btree or 0
*
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t size = 0;

    if (tree == NULL)
    {
        return (0);
    }
    size = (1 + binary_tree_size(tree->left) +
	binary_tree_size(tree->right));

    return (size);
}
/**
* binary_tree_is_perfect - check for perfect btree
* @tree: root node of btree
* Return: 1 if perfect
*
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int theight, count = 0;
    int tsize;
    int pop = 1;

    theight = binary_tree_height(tree);
    tsize = binary_tree_size(tree);

    while (count <= theight)
    {
        pop *= 2;
        count++;
    }
    if (pop - 1 == tsize)
        return (1);
    else
        return (0);
}
