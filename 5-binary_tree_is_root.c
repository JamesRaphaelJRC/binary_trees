#include "binary_trees.h"


/**
 * binary_tree_is_root - Checks if a node is a root.
 * @node: The very node to be checked.
 *
 * Return: 1 if node is a root and 0 if not or node is NULL.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL || node->right == NULL)
		return (0);

	return (1);
}
