#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: integer
 * @index: index, starting from 0 of the bit I want to get
 * Return: Returns the value of the bit at index or -1
 * if index is over 63
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, temp;

	if (index > 63)
		return (-1);

	mask = 1;

	mask = mask << index;

	temp = mask & n;

	if (temp == 0)
	{
		return (0);
	}
	return (1);
}
