#include "sort.h"

/**
 * shell_sort - implement shell sort method
 * @array: array to sort
 * @size: size of array
 * Return: nothing, void function
 */
void shell_sort(int *array, size_t size)
{
	int idx, j, gap, temp, array_len;
	int gaps[4] = {40, 13, 4, 1};

	if (array == NULL || size <= 1)
		return;
	for (array_len = 0; array[array_len] != '\0'; array_len++)
		;
	for (idx = 0; idx < 4 ; idx++)
	{
		if ((size_t)gaps[idx] <= size)
		{
			for (gap = gaps[idx]; (size_t)gap < size; gap++)
			{
				temp = array[gap];
				for (j = gap;
				     j >= gaps[idx] && array[j - gaps[idx]] > temp;
				     j -= gaps[idx])
				{
					array[j] = array[j - gaps[idx]];
				}
				array[j] = temp;
			}
			print_array(array, size);
		}
	}
}
