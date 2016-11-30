#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a list_t list
 * @head: linked list
 * @n: integer
 * Return: temp (placeholder)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp;

/* create space in memory for newNode */
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

/* Places the values into nodes */
	newNode->n = n;
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
