#include "search_algos.h"
/**
 * linear_search - function that searches for value in array of ints
 * @array: pointer to 1st elem of array to search in
 * @size: number of elements in array
 * @value: value to search for
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;
	for (i = 0; i<size;i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
