/**
 * _islower - checks for lowercase character
 * @c: it's the first operand
 * Description: using the int _islower(int c) function
 * this returns a 1 if c is lowercase
 * and returns 0 otherwise
 * Return: Returns 1 or 0
 */

#include "holberton.h"

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
