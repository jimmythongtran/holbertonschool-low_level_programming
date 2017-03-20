#include "binary_trees.h"
/**
 * binary_tree_depth - measures depth of a node of a binary tree
 * @node: SE
 * Return: nothing
 */

size_t binary_tree_depth(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(node->parent));
}
