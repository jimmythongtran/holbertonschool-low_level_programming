/**
 * swap_int - swaps the values of two integers
 * @a: original input
 * @b: original input
 * Desription: swaps the value of two integers
 * using dereferencing
 * Return: Returns nothing because it is void
 */
#include "holberton.h"

void swap_int(int *a, int *b)
{
	int base;

	base = *a;
	*a = *b;
	*b = base;
}
