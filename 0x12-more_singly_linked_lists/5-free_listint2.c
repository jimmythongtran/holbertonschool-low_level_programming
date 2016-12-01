#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees the memory of listint_t
 * @head: a pointer to the head of the linked list
 */

/* pass a double pointer instead of a pointer */
/* dereference the pointer to use its value like single pointer */
void free_listint2(listint_t **head)
{
	listint_t *temp;
/* checking head for NULL */
	if (head == NULL)
		return;
/* checks if pointer to the head is NULL, if the list is empty, it returns */
	while (*head != NULL)
	{
/* save the pointer to the head in a temp variable */
		temp = *head;
/* make pointer to the head point to the next node on list */
		*head = (*head)->next;
/* safely free(temp) variable - head points to the rest of the list */
		free(temp);
	}
}
