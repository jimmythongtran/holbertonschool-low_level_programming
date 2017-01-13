/**
 * _isupper - checks for uppercase character
 * @c: only operand
 * Return: returns 1 or 0
 */

#include "holberton.h"

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
