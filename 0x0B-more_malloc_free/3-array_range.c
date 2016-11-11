#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to newly created array
 **/

int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
