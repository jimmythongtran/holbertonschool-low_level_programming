#include "binary_trees.h"
/**
 * binary_tree_size - gives size of sub-tree
 * @tree: SE
 * Return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
