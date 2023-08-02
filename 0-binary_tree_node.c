#include "binary_trees.h"


/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent node of the node to be created
 * @value: The value to be put in the new node.
 *
 * Return: A pointer to the new node or NULL otherwise.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;

	return (newnode);
}
