#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *insert_dnodeint_at_idx - a function that inserts a new node
 * at a given position
 *@head: double pointer to head
 *@idx: the index of the list where new node should be added
 *@n: integer
 * Return: Returns new node address
 */

dlistint_t *insert_dnodeint_at_idx(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i; /*counter*/

/* edge case for NULL*/
	if (*head == NULL && idx != 0)
		return (NULL);
/*creating a new node by freeing space in memory*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n; /* filling out the new node with data */
/* edge case for 0 */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
/* find position to put new_node in */
/* index-1 because we want to find the node before the one we insert */
	i = 0;
	temp = *head;
	while (i < (idx - 1) && temp != NULL)
	{
		i++;
		temp = temp->next;
	}
/* the original linked list went out of bounds */
	if (i != (idx - 1))
	{
		free(new_node);
		return (NULL);
	}
/* link previous and following node to newly created node */
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
