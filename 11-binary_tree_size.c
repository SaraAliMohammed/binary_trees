#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: Pointer to the root node of the tree to traverse.
 *
 * Return: 0 if tree is NULL or the size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (!tree)
		return (0);
	size += (tree->left) ? 1 : 0;
	size += (tree->right) ? 1 : 0;
	return (size);
}
