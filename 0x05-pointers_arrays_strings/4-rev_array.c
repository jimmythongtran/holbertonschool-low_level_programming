/**
 * reverse_array - reverse an array of integers
 * @a: pointed array
 * @n: counter
 * Description: reverse an array
 * Return: nothing
 */

#include "holberton.h"
void reverse_array(int *a, int n)
{
	int start;
	int end;
	int i;

	i = 0;
	while (i < n)
	{
		start = a[i];
		end = a[n];
		a[n--] = start;
		a[i++] = end;
	}
}
