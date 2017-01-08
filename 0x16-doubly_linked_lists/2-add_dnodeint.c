#include <stdio.h>
#include "lists.h"
#include "string.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beg of a dlistint_t list
 * @head: double pointer head of the linked list
 * @n: pointer to the integer to be put into the element
 * Return: address of the newNode element or NULL
 */

/* allocate new space
 * check do make sure we didn't run out of memory
 * TODO: populate and insert node at beginning of ll
 * TODO: fix the previous pointer of the old head of ll
 * return a pointer to new head of ll
 */

/* The data type is an integer instead a string */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

/* Don't need a counter because not a string */
/* Change str to integer data type*/
	newNode->n = n;
	/*newNode->next = *head;*/
	newNode->prev = NULL;; 
	*head = newNode;

	return (newNode);
}


