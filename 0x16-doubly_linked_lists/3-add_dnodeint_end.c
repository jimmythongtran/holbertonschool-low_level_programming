#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a list_t list
 * @head: head of the doubly linked list
 * @n: integer value for new node
 * Return: address of element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

/* create space in memory for newNode */
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

/* Places the values into nodes */
	newNode->n = n;
/* This is all it took because it needs to traverse */
	newNode->prev = NULL;
	newNode->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newNode;
	}
	return (temp);
}
