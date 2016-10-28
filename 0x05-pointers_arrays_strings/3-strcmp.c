/**
 * _strcmp - comparing strings
 * @s1: string one
 * @s2: string two
 * Description: compares two strings
 * Return: integer
 */

#include "holberton.h"

int _strcmp(char *s1, char *s2)
{
	int ctr;

	ctr = 0;

	while (s1[ctr] != '\0' && s2[ctr] != '\0')
	{
		if (s1[ctr] != s2[ctr])
			return ((s1[ctr] - '0') - (s2[ctr] - '0'));
	ctr++;
	}
	return (0);

}

