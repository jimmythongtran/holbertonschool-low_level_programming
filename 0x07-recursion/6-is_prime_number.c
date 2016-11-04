/**
 * helper - return the value of x to the power of y
 * @n: original number
 * @div: divisor number
 * Return: the value of x to the power of y
 */
#include "holberton.h"

int helper(int n, int div)
{

	if (n % div != 0 && n > 1)
	{
		return (helper(n, div + 1));
	}
	if (n % div == 0 && n > div)
	{
		return (0);
	}
	if (n == div)
	{
		return (1);
	}
	return (0);
}
/**
 * is_prime_number - return the value of x to the power of y
 * @n: original number
 * Return: the value of x to the power of y with the assist of
 * the helper function
 */

int is_prime_number(int n)
{
	return (helper(n, 2));
}
