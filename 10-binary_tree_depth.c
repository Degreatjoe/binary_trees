#include "binary_trees.h"
/**
 * binary_tree_depth - checks tthe depth of te binary tree
 *
 * @tree: the tree to check
 *
 * Return: the depth of the tree
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
