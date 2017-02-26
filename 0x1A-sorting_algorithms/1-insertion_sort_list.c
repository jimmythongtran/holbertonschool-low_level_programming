#include "sort.h"

/**
 * insertion_sort_list - insertion sort on a doubly linkedlist
 * @list: the linked list to sort
 * Return: nothing, void function
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *index, *temp;

	if (list == NULL || *list == NULL)
		return;
	index = *list;
	while (index != NULL && index->next != NULL)
	{
		temp = index->next;
		if (index->n > temp->n)
		{
			index = temp;
			while (index != NULL && index->prev != NULL
			       && index->prev->n > index->n)
			{
				temp = index->prev;
				node_switch(temp, index);
				if (index->prev == NULL)
					*list = index;
				print_list(*list);
				temp = index;
			}
		}
		else
			index = index->next;
	}
}

/**
 * node_switch - swap two doubly linked list nodes
 * @node_a: node to 'left'
 * @node_b: node to 'right'
 * Return: nothing, void function
 */
void node_switch(listint_t *node_a, listint_t *node_b)
{
	if (node_a->prev != NULL)
		node_a->prev->next = node_b;
	if (node_b->next != NULL)
		node_b->next->prev = node_a;
	node_a->next = node_b->next;
	node_b->prev = node_a->prev;
	node_a->prev = node_b;
	node_b->next = node_a;
}
