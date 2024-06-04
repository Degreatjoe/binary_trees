#include "binary_trees.h"
/**
 * binary_tree_delete - the function deletes a tree
 * using the pointer to that tree
 *
 * @tree: the pointer to the tree to delete
 *
 * Return: null if the tree is empty
*/
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	/**
	 * recursively assign the left and right leaf/node of
	 * the tree for deletion
	*/
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/*delete the leaves/node by freeing the allocated memory*/
	free(tree);
}
