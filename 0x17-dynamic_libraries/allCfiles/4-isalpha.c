/**
 * _isalpha - returns 1 or 0 if lowercase or uppercase
 * @c: integer we are passing through
 * Description: Could possibly be refactored
 * Return: 1 or 0
 */

#include "holberton.h"

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
