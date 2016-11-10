#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_len - counts how many characters are in the string
 * @s: pointer variable
 * Return: number of characters in the string
 */

int str_len(char *s)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two to concatenate to string one
 * Return: Returns the pointer or NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	int count, count2;
	char *a;

	a = malloc(str_len(s1) + str_len(s2) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	count = 0;
	while (count <= str_len(s1))
	{
		a[count] = s1[count];
		count++;
	}
	count--;
	count2 = 0;
	while (count2 <= str_len(s2))
	{
		a[count] = s2[count2];
		count++;
		count2++;
	}
	a[count] = '\0';
	return (a);
}
