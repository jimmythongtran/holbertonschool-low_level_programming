/**
 * print_array - prints array and it's index
 * @a: pointer variable
 * @n: number of elements in array
 */

#include "holberton.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
