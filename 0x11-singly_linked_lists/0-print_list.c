#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints a list_t list
 * @h: pointer to struct
 * Return: counter
 */
size_t print_list(const list_t *h)
{
	size_t  counter;

	counter = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
