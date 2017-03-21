#include "binary_trees.h"
/**
 * binary_tree_height - measures height of binary tree
 * @tree: binary tree
 * Return: nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = 1 + binary_tree_height(tree->left);
	right = 1 + binary_tree_height(tree->right);
	if (left > right)
		return (left);
	return (right);
}

/**
 * binary_tree_balance - measures balance factor of binary tree
 * @tree: binary tree
 * Return: difference between left and right subtrees
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	int leftSubTree, rightSubTree;

	leftSubTree = 0;
	rightSubTree = 0;

	if (tree == NULL)
		return (0);

	leftSubTree = binary_tree_height(tree->left);
	rightSubTree = binary_tree_height(tree->right);
	return (leftSubTree - rightSubTree);
}
