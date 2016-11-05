/**
 * *_strchr - finding where c appears first
 * @s: target objective
 * @c: target
 * Return: everything after the target
 */

#include "holberton.h"
#include <stdlib.h>

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (NULL);
}

/**
 *_strspn - counting the number of times
 * a character is in a substring of an array
 * @s: the main string
 * @accept: the substring we are finding the
 * characters for
 * Return: Returns NULL, but didn't pass checks, so kept it at 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		if (_strchr(accept, *(s + n)))
		{
			n++;
		}
		else
		{
			return (n);
		}
	}
	return (0);
}
