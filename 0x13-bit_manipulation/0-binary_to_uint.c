#include "holberton.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
/* total is the sum from looping through 0 and 1s */
	unsigned int total, power;
/* counter through length of string of 0 and 1s */
	int len;
/* one of the specs*/
	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
/* one of the specs, output 3 */
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, total = 0, len--; len >= 0; len--,  power *= 2)
	{
/* number raised to the power when it hits 1s in string */
		if (b[len] == '1')
			total += power; /* total = total + power */
	}
	return (total);
}
