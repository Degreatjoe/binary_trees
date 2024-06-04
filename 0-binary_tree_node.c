#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_node - creates a new node of
 * the binary tree.
 *
 * @parent: the pointer to the parent node oof the
 * node to create
 * @value: The value to be inserted in the new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*allocate memory for the node*/
	binary_tree_t *NewNode = malloc(sizeof(binary_tree_t));

	/*check if the memory allocation was successful*/
	if (!NewNode)
		return (NULL);

	/*assign various attribute to their respective variables*/
	NewNode->n = value;
	NewNode->parent = parent;
	NewNode->left = NULL;
	NewNode->right = NULL;

	/*return the pointer to the created node*/
	return (NewNode);
}
