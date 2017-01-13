/**
 * _isdigit - checks for a digit
 * @c: only operand
 * Return: returns 1 or 0
 */

#include "holberton.h"

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
