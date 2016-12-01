#include <stddef.h>
#include "lists.h"
/**
 * sum_listint - sums up all data (n) of linked list listint_t
 * @head: a pointer to the head of the linked list
 * Return: returns sum
 */
int sum_listint(listint_t *head)
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
