/**
 * init_dog - a function that initializes a variable of type struct dog
 * @d: pointer variable to the struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description:
 */
#include <stdio.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
