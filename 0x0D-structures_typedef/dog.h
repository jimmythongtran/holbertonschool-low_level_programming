#ifndef DOG
#define DOG
/**
 * struct dog - Short description
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
