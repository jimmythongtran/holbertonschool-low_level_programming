/**
 * _strlen - returns the length of a string
 * @s: original input
 * Description: loops through s to count
 * except excludes null zero
 * Return: Returns the length of a string
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
