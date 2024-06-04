#include "binary_trees.h"
/**
 * binary_tree_insert_right - the function to inserrt a node
 * at the right of a binary tree
 *
 * @parent: the parent of the node to be added
 * @value: the value to be inserted in the tree
 *
 * Return: the pointer to the created biinary tree
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/**
	 * check if parent is empty
	*/
	if (parent == NULL)
	{
		return (NULL);
	}

	/*create the node*/
	new_node = binary_tree_node(parent, value);

	/*check if node creation was successful*/
	if (new_node == NULL)
		return (NULL);
	/**
	 * check if parent right already has a node
	*/
	if (parent->right != NULL)
	{
		new_node->right = parent->right;

		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
