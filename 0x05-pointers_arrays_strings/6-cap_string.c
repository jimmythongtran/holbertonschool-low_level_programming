#include "holberton.h"

/**
 * spaces - accounts for delimiters of space
 * @c: input variable
 * Return: 1 if it's a delimiter and 0 if it's not
 */
int spaces(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' ||
	c == '"' || c == '(' || c == ')' || c == '{' || c == '}' ||
	c == '.' || c == '!' || c == '?' || c == ';')
	{
		return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes all words in a string
 * @p: pointer variable, pointing to the address of
 * an array of a string of characters
 * Return: Returns array that's being pointed to
 */

char *cap_string(char *p)
{
	int i;

	i = 0;
	if (p[i] >= 'a' && p[i] <= 'z')
	{
		p[i] -= 32;
	}
	while (p[i] != '\0')
	{
		if (spaces(p[i]) == 1 && (p[i + 1] >= 'a' && p[i + 1] <= 'z'))
		{
			p[i + 1] -= 32;
		i++;
		}
		else
		{
		i++;
		}
	}
return (p);
}
