#include "binary_trees.h"
/**
 * binary_tree_node - function that inserts node
 * @parent: parent node of node to create
 * @value: value to insert
 * Return: NULL if fail, or new node parent
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	parent = node;
	return (node);
}
