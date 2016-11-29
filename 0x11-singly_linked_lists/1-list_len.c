#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * list_len - prints a list_t list
 * @h: pointer to struct
 * Return: counter
 */
size_t list_len(const list_t *h)
{
	size_t  counter;

	counter = 0;
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
