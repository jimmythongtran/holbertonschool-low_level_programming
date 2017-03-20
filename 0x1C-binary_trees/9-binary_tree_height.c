#include "binary_trees.h"
/**
 * binary_tree_height - measures height of binary tree
 * @tree: binary tree
 * Return: nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);
	if (left > right)
		return (left);
	return (right);
}
