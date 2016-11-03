/**
 * _pow_recursion - return the value of x to the power of y
 * @x: base integer
 * @y: power integer
 * Return: the value of x to the power of y
 */
#include "holberton.h"

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
