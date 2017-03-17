#include "binary_trees.h"
/**
 *
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
/*
   Visit the root
   Traverse the left subtree
   Traverse the right subtree
*/
	if (tree == NULL)
		return;

	func(tree->n);

	binary_tree_preorder(tree->left, &(*func));
	
	binary_tree_preorder(tree->right, &(*func));
}
