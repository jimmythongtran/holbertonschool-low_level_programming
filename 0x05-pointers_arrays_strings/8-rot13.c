/**
 * rot13 - Prints out an array of inverse characters
 * @p: pointed variable
 * Return: Returns the inverse characters
 */

#include "holberton.h"

char *rot13(char *p)
{
	int i;

	i = 0;
	while (p[i] != '\0')
	{
		while ((p[i] >= 'a' && p[i] <= 'z') || (p[i] >= 'A' && p[i] <= 'Z'))
		{
			if ((p[i] >= 'n' && p[i] <= 'z') || (p[i] >= 'N' && p[i] <= 'Z'))
			{
				p[i] -= 13;
			}
			else
			{
				p[i] += 13;
			}
			i++;
		}
		i++;
	}
	return (p);
}
