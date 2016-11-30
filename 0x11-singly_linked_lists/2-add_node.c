#include <stdio.h>
#include "lists.h"
#include "string.h"
#include <stdlib.h>

/**
 * add_node - adds a new node at the end of a list_t list
 * @head: double pointer to head node
 * @str: pointer to the string to be put into the element
 * Return: newNode
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	int i;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}

	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
