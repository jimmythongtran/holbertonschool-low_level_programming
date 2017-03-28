#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts node as the right-child
 * @parent: parent node of node to create
 * @value: value to insert
 * Return: NULL if fail, or new node parent
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *temp;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->right = NULL;
	node->left = NULL;
	node->parent = parent;
	if (parent->right == NULL)
	{
		parent->right = node;
	}
	else
	{
		temp = parent->right;
		parent->right = node;
		node->right = temp;
		temp->parent = node;
	}
	return (node);
}
