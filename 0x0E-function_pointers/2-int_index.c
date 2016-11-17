#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: a pointer that points to an array
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: if no element matches the array, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	if (array == NULL)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]))
		return (i);
		i++;
	}
	return (-1);
}
