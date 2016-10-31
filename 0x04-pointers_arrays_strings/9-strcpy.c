/**
 * _strcpy - copy a string from src to dest
 * @dest: where to copy string to
 * @src: source for string value
 * Return: dest
 */

#include "holberton.h"

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*src >= '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (dest);
}
