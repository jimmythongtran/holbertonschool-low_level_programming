/**
 * _strlen - returns the length of a string
 * @s: original input
 * Description: returns the length of a string
 * Return: Returns nothing because it is void
 */
#include "holberton.h"

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		s++;
		c++;
	}
	return (c);
}
