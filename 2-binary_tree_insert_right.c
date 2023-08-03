#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the left child of another node.
 * @parent: A pointer to the node to insert the left child
 * @value: The value to store in the new node.
 *
 * Return: A pointer to the new node on success and NULL on failure or if
 *		parent is NULL;
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode, *tmp;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);

	if (parent->right != NULL)
	{
		tmp = parent->right;
		newnode->right = tmp;
		newnode->left = tmp->left;
		tmp->parent = newnode;
	}
	else
	{
		newnode->left = NULL;
		newnode->right = NULL;
	}
	newnode->n = value;
	newnode->parent = parent;
	parent->right = newnode;

	return (newnode);
}
