/**
 * string_toupper - turns string into uppercase
 * @p: variable pointer
 * Return: uppercase string
 */
#include "holberton.h"

char *string_toupper(char *p)
{
	int i = 0;

	while (p[i] != '\0')
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] -= 32;
		}
	i++;
	}
	return (p);
}
