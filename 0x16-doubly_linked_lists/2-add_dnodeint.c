#include <stdio.h>
#include "lists.h"
#include "string.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the end of a list_t list
 * @head: double pointer to head node
 * @n: pointer to the integer to be put into the element
 * Return: newNode
 */

/* The data type is an integer instead a string */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

/* Don't need a counter because not a string */
/* Change str to integer data type*/
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
