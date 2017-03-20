#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in binary tree
 * @tree: SE
 * Return: size
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves;

	leaves = 0;

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree == NULL)
		return (0);
	if (tree->left)
		leaves += 1;
	if (tree->right)
		leaves += 1;
	return (leaves);
}
