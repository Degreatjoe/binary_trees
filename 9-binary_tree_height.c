#include "binary_trees.h"
/**
 * binary_tree_height - to check the height of a binary tree
 *
 * @tree: the tree to check
 *
 * Return: the height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;


	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}
