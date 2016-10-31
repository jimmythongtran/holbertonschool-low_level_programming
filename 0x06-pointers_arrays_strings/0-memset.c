#include "holberton.h"
/**
 * *_memset - filling up memory with constant byte
 * @s: array of string characters  being changed
 * @b: replacement items
 * @n: number of bytes
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

