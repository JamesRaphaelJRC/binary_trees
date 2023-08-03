#include "binary_trees.h"


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: The height of the tree on success and 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_ht = 0, r_ht = 0;

		l_ht = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r_ht = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l_ht > r_ht) ? l_ht : r_ht);
	}
	return (0);
}
