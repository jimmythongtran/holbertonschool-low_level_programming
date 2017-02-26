#include "sort.h"

/**
 * selection_sort - implementation of selection sort on array
 * @array: array to sort
 * @size: the size of array
 * Return: nothing, since it is void function
 */
void selection_sort(int *array, size_t size)
{
	int temp;
	size_t i, j, min_int;

	if (array == NULL)
		return;
	min_int = 0;
	for (i = 0; i < size - 1; i++)
	{
		min_int = i;
		for (j = i + 1; j < size; j++)
		{
			if (*(array + j) < *(array + min_int))
				min_int = j;
		}
		if (min_int != i)
		{
			temp = *(array + i);
			*(array + i) = *(array + min_int);
			*(array + min_int) = temp;
			print_array(array, size);
		}
	}
}
