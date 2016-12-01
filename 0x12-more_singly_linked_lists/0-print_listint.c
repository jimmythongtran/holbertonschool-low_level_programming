#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_listint - prints a list_t list
 * @h: pointer to struct
 * Return: counter
 */
size_t print_listint(const listint_t *h)
{
	size_t  counter;

	if (h == NULL)
		return (0);

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
