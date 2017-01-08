#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints values of all nodes in dlistint_t list
 * @h: head pointer of doubly linked list
 * Return: counter for number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t  counter;

	counter = 0;
	while (h != NULL)
	{
/* Used template from yesterday, changed the data type to one instead of two */
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
