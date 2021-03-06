#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees the memory of dlistint_t
 * @head: a pointer to the head of the linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
/* checks if head is NULL, if the list is empty, it returns */
	while (head != NULL)
	{
/* save the head in a temp variable */
		temp = head;
/* make head point to the next node on list */
		head = head->next;
/* safely free(temp) variable - head points to the rest of the list */
/* adding this line to commit new message */
		free(temp);
	}
}
