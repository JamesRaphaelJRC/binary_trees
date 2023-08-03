#include "binary_trees.h"


int binary_tree_balance(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: The balance factor on success and 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_subtree, r_subtree;

	if (tree == NULL)
		return (0);

	l_subtree = binary_tree_height(tree->left);
	r_subtree = binary_tree_height(tree->right);

	return (l_subtree - r_subtree);
}


/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: The height of the tree on success and 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);

	if (tree->left)
		l_height = 1 + binary_tree_height(tree->left);
	else
		l_height = 0;
	if (tree->right)
		r_height = 1 + binary_tree_height(tree->right);
	else
		r_height = 0;

	return ((l_height > r_height) ? l_height : r_height);
}
