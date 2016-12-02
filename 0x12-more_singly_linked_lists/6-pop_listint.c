#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a listint_t
 * returns the head node's data (n)
 * @head: head node
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int holder; /* holds headNodeData */

/* checks if the pointer of head is NULL */
	if (*head == NULL)
		return (0);

/* temp holds the address of head */
	temp = *head;

/* take the next item that the head points to and save it */
/* grabbing the n value in temp struct and storing it in holder variable */
	holder = temp->n;

/* points to the second node */
	*head = temp->next;

/* pops the head node*/
	free(temp);

/* returns head node's data */
	return (holder);
}
