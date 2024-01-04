#include "binary_trees.h"

/**
 * compare_depth - Compares size.
 * @tree: pointer to the root.
 *
 * Return: size
 */
int compare_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	else
		return (compare_depth(tree->left) + 1 + compare_depth(tree->right));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: Pointer to the root node of the tree to check.
 *
 * Return: 1 if perfect, otherwise 0.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_d = 0, right_d = 0;

	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (1);
	left_d = compare_depth(tree->left);
	right_d = compare_depth(tree->right);
	if (left_d - right_d == 0)
		return (1);
	return (0);

}
