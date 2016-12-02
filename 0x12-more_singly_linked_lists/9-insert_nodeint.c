#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - a function that inserts a new node
 * at a given position
 *@head: double pointer to head
 *@index: the index of the list where new node should be added
 *@n: integer
 * Return: Returns new node data
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node, *temp; /* */
	unsigned int i; /*counter*/

/* edge case for NULL*/
	if (*head == NULL && index != 0)
		return (NULL);
/*creating a new node by freeing space in memory*/
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n; /* filling out the new node with data */
/* edge case for 0 */
	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
/* find position to put new_node in */
/* index-1 because we want to find the node before the one we insert */
	i = 0;
	temp = *head;
	while (i < (index - 1) && temp != NULL)
	{
		i++;
		temp = temp->next;
	}
/* the original linked list went out of bounds */
	if (i != (index - 1))
	{
		free(new_node);
		return (NULL);
	}
/* link previous and following node to newly created node */
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
