#include "sort.h"

/**
 * insertion_sort - to practice insertion sort with array
 * @array: input array
 * @size: array size
 * Return: nothing, void function
 */
void insertion_sort(int *array, size_t size)
{
	size_t i;
	int temp, j, k;

	j = 1;
	while (j != 0)
	{
		k = 0;
		for (i = 0; i < size - 1; i++)
		{
			if ((array + i) == NULL || (array + i + 1) == NULL)
				return;
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				k = 1;
				print_array(array, size);
				while (i >= 1 && array[i] < array[i - 1])
				{
					temp = array[i];
					array[i] = array[i - 1];
					array[i - 1] = temp;
					k = 1;
					print_array(array, size);
					i--;
				}
			}
		}
		if (k == 0)
			j = 0;
	}
}
