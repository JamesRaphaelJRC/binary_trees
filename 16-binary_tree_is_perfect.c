#include "binary_trees.h"


int binary_tree_is_perfect(const binary_tree_t *tree);
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check
 *
 * Return: 1 if binary tree is perfect and 0 if tree is NULL or tree is
 *		not perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height == r_height)
	{
		if (l_height == 0)
			return (1);

		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}


/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_height = binary_tree_height(tree->left);
		size_t r_height = binary_tree_height(tree->right);

		return ((l_height > r_height) ? l_height + 1 : r_height + 1);
	}
	return (0);
}
