#include "sort.h"

/**
 * bubble_sort - implementation of bubble sort
 * @array: the array to be sorted
 * @size: length of array
 * Return: nothing, void function
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int j, help, k;

	if (array == NULL)
		return;
	j = 1;
	while (j != 0)
	{
		k = 0;
		for (i = 0; i < size - 1; i++)
		{
			if ((array + i) == NULL || (array + i + 1) == NULL)
				return;
			if (*(array + i) > *(array + i + 1))
			{
				help = *(array + i);
				*(array + i) = *(array + i + 1);
				*(array + i + 1) = help;
				k = 1;
				print_array(array, size);
			}
		}
		if (k == 0)
			j = 0;
	}
}
