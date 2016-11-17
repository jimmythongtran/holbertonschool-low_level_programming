#include "dog.h"
#include <stdlib.h>
#include <stdio.h>


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
	

/**
 * new_dog - a function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *tmp;

	tmp = malloc(sizeof(dog_t));
	if (tmp == NULL)
		return (NULL);
	tmp->name = _strdup(name);
	if (tmp->name == NULL)
	{
	  free(tmp);
	  return (NULL);
	}
	tmp->age = age;
	tmp->owner = _strdup(owner);
	if (tmp->owner == NULL)
	{
	  free(tmp->owner);
	  free(tmp)
	  return (NULL);
	}
	return (tmp);
}
