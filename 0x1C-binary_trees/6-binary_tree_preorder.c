#include "binary_trees.h"
/**
 * binary_tree_preorder - traverse binary tree using pre-order
 * @tree: tree to traverse
 * @func: function that applies to each node
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	if (func == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, func);

	binary_tree_preorder(tree->right, func);
}
