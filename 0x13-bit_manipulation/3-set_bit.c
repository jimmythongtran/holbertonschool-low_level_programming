#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to n
 * @index: index
 * Return: 1 if successful, -1 if index exceeds 63
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = 1;

	mask = mask << index;

	*n = *n | mask;

	return (1);
}
