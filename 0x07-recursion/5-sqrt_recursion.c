/**
 * helper - return the value of x to the power of y
 * @n: original number
 * @j: square root value
 * Return: the value of x to the power of y
 */
#include "holberton.h"

int helper(int n, int j)
{
	if (j * j == n)
	{
		return (j);
	}
	else if (j * j < n)
	{
		return (helper(n, j + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - return the value of x to the power of y
 * @n: original number
 * Return: the value of x to the power of y with the assist of
 * the helper function
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1));
}
