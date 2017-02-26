#include "sort.h"

/**
 * shell_sort - implement shell sort method
 * @array: array to sort
 * @size: size of array
 * Return: nothing, void function
 */
void shell_sort(int *array, size_t size)
{
	int idx, j, gap, temp;
	int gaps[2] = {4, 1};

	if (array == NULL)
		return;
	for (idx = 0; idx < 2; idx++)
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
