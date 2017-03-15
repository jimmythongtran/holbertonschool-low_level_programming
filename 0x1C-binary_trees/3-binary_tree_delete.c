#include "binary_trees.h"
/**
 * binary_tree_delete - deletes an entire binary tree
 * @parent: parent node of node to create
 * @value: value to insert
 * Return: NULL if fail, or new node parent
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->left)
	{
		binary_tree_delete(tree->left);
		free(tree->left);
	}
	if (tree->right)
	{
		binary_tree_delete(tree->right);
		free(tree->right);
	}
}
