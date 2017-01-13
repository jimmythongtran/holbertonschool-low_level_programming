/**
 * _abs - computes the absolute value
 * of an integer
 * @n: the integer we are passing through
 * Description: using the _abs function
 * computes the absolute value of an integer
 * Return: Returns n or 0
 */

#include "holberton.h"

int _abs(int n)
{
/* if n is negative, multiply by -1 to make it positive */
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}

	return (0);
}
