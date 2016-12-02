#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - a function that deletes the node
 * at index of a listint_t linked list
 *@head: double pointer to head
 *@index: the index of the list where new node should be added
 * Return: Returns 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *previous; /* holder for node 3 */
	unsigned int i; /*counter*/

	i = 0;
	previous = *head;

/* edge case for NULL*/
	if (*head == NULL)
		return (-1);

/*edge case for index at 0*/
/* make sure head is pointing to a valid node */
	if (index == 0)
	{
		temp = previous;
		previous = previous->next;
		*head = previous;
		free(temp);
		return (1);
	}

/* find position of node 2 */
/* index-1 because we want to find the node before the one we insert */
	while (i < (index - 1) && previous != NULL)
	{
		i++;
		previous = previous->next;
	}

	if (i == (index - 1))
	{
		temp = previous->next; /* to 3 */
		previous->next = temp->next; /* connects 2 to 4 */
		free(temp);
		return (1);
	}
	return (-1);
}
