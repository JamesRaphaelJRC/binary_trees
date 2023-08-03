#include "binary_trees.h"


/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 * @node: The very node to be checked.
 *
 * Return: 1 if node is a leaft and 0 if not or node is NULL.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
