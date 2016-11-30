#include "lists.h"
/**
 * free_list - frees the memory of list_t
 * @head: a pointer to the head of the linked list
 */
void free_list(list_t *head)
{
/* when head reaches the end */
	if (head == NULL)
	{
		return;
	}
/* free all memory allocations */
	free_list(head->next);
	free(head->str);
	free(head);
}
