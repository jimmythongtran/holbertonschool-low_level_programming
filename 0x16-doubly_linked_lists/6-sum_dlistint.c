#include <stddef.h>
#include "lists.h"
/**
 * sum_dlistint - sums up all data (n) of linked list dlistint_t
 * @head: a pointer to the head of the linked list
 * Return: returns sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
/* iterates through the data of the struct */
		sum += head->n;
/* points to the next node address */
		head = head->next;
	}
	return (sum);
}
