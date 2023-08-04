#include "binary_trees.h"


/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if binary tree is full and 0 if tree is NULL or tree is not full.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int condition;

	if (tree == NULL)
		return (0);

	if ((tree->left != NULL && tree->right == NULL)
		|| (tree->left == NULL && tree->right != NULL))
			return (1);
	else
		return (0);

	condition = binary_tree_is_full(tree->left);
	condition = binary_tree_is_full(tree->right);

	return (condition);
}