#include "binary_trees.h"
/**
 * binary_tree_insert_right - function that inserts node as the right-child
 * @parent: parent node of node to create
 * @value: value to insert
 * Return: NULL if fail, or new node parent
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return (NULL);

	if (parent->right == NULL)
	{
		node->parent = parent;
		parent->right = node;
		node->n = value;
		node->right = NULL;
		node->left = NULL;
	}
	else
	{
		temp = parent->right;
		node->n = value;
		node->left = NULL;
		node->parent = parent;
		parent->right = node;
		node->right = temp;
		temp->parent = node;
	}
	return (node);
}
