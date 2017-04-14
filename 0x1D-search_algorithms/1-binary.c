#include "search_algos.h"

/**
 * print_arrays - print the arrays
 * @array: SE
 * @front: lowest value of array
 * @end: highest value of array
 */
void print_arrays(int *array, size_t front, size_t end)
{
	size_t i;

	printf("Searching in array:");
	for (i = front; i < end; i++)
	{
		printf(" %d,", array[i]);
	}
	printf(" %d\n", array[i]);
}

/**
 * binary_search - function that searches for value in sorted int array
 * @array: pointer to 1st elem of array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_arrays(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
		{
			right = middle;
		}
		else if (array[middle] < value)
		{
			left = middle + 1;
		}
	}
	return (-1);
}
