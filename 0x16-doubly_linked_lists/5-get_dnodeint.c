#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns the nth node of a linked list dlistint_t
 * @head: head node
 * @index: node index
 * Return: head node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
/* creating a current counter to keep track */
	unsigned int current;

	current = 0;
/* edge case */
	if (head == NULL)
		return (NULL);
	while (current < index)
	{
		current++;
/* edge case */
		if (head == NULL)
			return (NULL);
/* moves to the next node */
		head = head->next;
	}
/* returns nth node */
	return (head);
}
