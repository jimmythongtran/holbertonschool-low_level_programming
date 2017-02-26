#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the prev element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* print array */
void print_array(const int *array, size_t size);
/* print list */
void print_list(const listint_t *list);

/* task 0 */
void bubble_sort(int *array, size_t size);

/* task 0.5 */
void insertion_sort(int *array, size_t size);

/* task 1 */
void insertion_sort_list(listint_t **list);
void node_switch(listint_t *node_a, listint_t *node_b);

/* task 2 */
void selection_sort(int *array, size_t size);

/* task 22 */
void shell_sort(int *array, size_t size);
#endif
