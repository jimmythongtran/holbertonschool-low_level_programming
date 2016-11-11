#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - counts how many characters are in a string
 * @str: string to count
 * Return: number of characters in the string
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}

/**
 * string_nconcat - concats two strings up to the n number of bytes
 * @s1: first string to concat. Whole string gets added
 * @s2: second string to concat. up to the Nth byte gets appended
 * @n: number of bytes of second string to concat
 * Return: pointer to beginning of string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int combined_length, i, j, s1length, s2length;

	if (s1 == NULL)
		s1length = 0;
	else
		s1length = _strlen(s1);
	if (s2 == NULL)
		s2length = 0;
	else
		s2length = _strlen(s2);
	if (s2length <= n)
		combined_length = s1length + s2length;
	else
		combined_length = s1length + n;
	printf("%d\n", combined_length);
	new_string = malloc(sizeof(char) * combined_length + 1);
	if (new_string == NULL)
		return (NULL);
	i = 0;
	while (i < s1length)
	{
		new_string[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < combined_length)
	{
		new_string[i] = s2[j];
		i++;
		j++;
	}
	new_string[i] = '\0';
	return (new_string);
}
