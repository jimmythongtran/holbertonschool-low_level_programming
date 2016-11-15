/**
 * new_dog - a function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Returns dog info
 */
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)

{
	dog_t *tmp;

	tmp = malloc(sizeof(dog_t));
	if (tmp == NULL)
		return (NULL);
	tmp->name = name;
	tmp->age = age;
	tmp->owner = owner;

	return (tmp);
}
