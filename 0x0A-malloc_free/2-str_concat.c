#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2 to concatenate onto string 1
 * Return: Returned pointer points to a newly allocated space in memory
 * which contains s1 followed by s2 and null terminated
 * If function fails, returns null
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *concat;

	concat = malloc(sizeof(*s1 + *s2));
	
	i = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
	i++;
	}

	j = 0;
	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
	j++;
	i++;
	}

	concat[i] = s2[j];

	return (concat);
}
