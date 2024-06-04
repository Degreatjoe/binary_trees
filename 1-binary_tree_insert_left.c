#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts to the
 * left of a binary treee
 *
 * @parent: the node at which a new node will
 * be inserted at the left
 * @value: the vale to be inserted
 *
 * Return: a pointer to the new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *Newnode;

	/*check if parent is empty*/
	if (parent == NULL)
		return (NULL);

	/**
	 * first create a new node by utilizing our
	 * previous newnode function
	 */
	Newnode = binary_tree_node(parent, value);

	/*check if the newnode creation was successful*/
	if (Newnode == NULL)
		return (NULL);

	/*check if the parent node already has a left child*/
	if (parent->left != NULL)
	{
		/**
		 * sets the newnode left pointer to the current
		 * left child of the parent
		 */
		Newnode->left = parent->left;

		/**
		 * Updates the current left child's parent pointer
		 * to the new node
		*/
		parent->left->parent = Newnode;
	}
	/*else Sets the parent's left pointer to the new node*/
	parent->left = Newnode;

	/*return pointer to the created node*/
	return (Newnode);
}
