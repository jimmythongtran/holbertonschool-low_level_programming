/**
 * print_dog - a function that prints the struct dog
 * @d: pointer variable to the struct dog
 * Description: uses -> to store data in heap structures
 */
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
