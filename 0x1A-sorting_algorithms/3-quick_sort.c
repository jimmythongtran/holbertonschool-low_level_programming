#include "sort.h"

/**
 * quick_sort - quick sort function
 * @array: array to sort
 * @size: size of array
 * Return: nothing, void function
 */
void quick_sort(int *array, size_t size)
{
	size_t lo, hi;

	lo = 0;
	hi = size - 1;
	if (array == NULL || size <= 1)
		return;
	qck_srt(array, lo, hi, size);
}

/**
 * qck_srt - helper functoin for recursion
 * @array: array to sort
 * @lo: lower index
 * @hi: higher index
 * @size: size of array
 * Return: nothing, void function
 */
void qck_srt(int *array, size_t lo, size_t hi, size_t size)
{
	size_t p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		qck_srt(array, lo, p - 1, size);
		qck_srt(array, p, hi, size);
	}
}

/**
 * partition - helper function for recurions
 * @array: array to sort
 * @lo: lower index
 * @hi: higher index
 * @size: size of array
 * Return: partition
 */
size_t partition(int *array, size_t lo, size_t hi, size_t size)
{
	int pivot, temp;
	size_t i, j;

	pivot = array[hi];
	i = lo - 1;
	j = hi + 1;

	while (1)
	{
		do {
			i++;
		} while (array[i] < pivot);
		do {
			j--;
		} while (array[j] > pivot && j != lo);
		if (i >= j)
			return (i);
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		print_array(array, size);
	}
}
