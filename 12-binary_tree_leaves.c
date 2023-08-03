#include "binary_trees.h"


/**
 * binary_tree_leaves - Measures the leaves of a binary tree
 * @tree: A pointer to the root node of the tree to measure the leaves
 *
 * Return: The leaves of the tree on success and 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
	{
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}

	return (leaves);
}
