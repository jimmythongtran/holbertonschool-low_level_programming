/**
 * _strlen_recursion - uses recursive function
 * to return length of string
 * @s: pointer variable
 * Return: Length of string at pointed variable
 */
#include "holberton.h"
int _strlen_recursion(char *s)
{

	int c;

	c = 0;

	if (*s == '\0')
	{
		return (0);
	}
	c = 1 + _strlen_recursion(s + 1);
	return (c);
}
