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
