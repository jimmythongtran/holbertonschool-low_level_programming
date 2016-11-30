#include <string.h> /* need to strdup */
#include <stdio.h>
#include "lists.h" /* need for function prototype and struct */
#include <stdlib.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: linked list
 * @str: string
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode; /* struct for newNode */
	list_t *temp; /* placeholder */
	int i; /* counter to iterate through loop */

/* create space in memory for newNode */
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
/* iterate through the string */
	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
/* Places the values into nodes */
/* creates a copy of the read only string that we pass
 * pass the pointer to *str
 * strdup uses malloc to create a copy of the string passed in
 * why need to check if it returns NULL
 */
	newNode->str = strdup(str);
	newNode->len = i;
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
