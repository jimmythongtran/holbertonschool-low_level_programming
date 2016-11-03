/**
 * factorial - return factorial of a number
 * @n: integer variable
 * Return: factorial of number
 */
#include "holberton.h"

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
