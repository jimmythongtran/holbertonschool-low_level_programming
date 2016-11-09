#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, containing a copy of the string given as a parameter
 * @str: string
 * Return: copy string
 */

char *_strdup(char *str)
{
	char *copy_string;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i++;

	copy_string = malloc(i * sizeof(char));
	if (copy_string == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		copy_string[j] = str[j];
		j++;
	}
	return (copy_string);
}
