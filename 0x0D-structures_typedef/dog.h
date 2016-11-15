#ifndef DOG
#define DOG
int _putchar(char c);
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

/* Ex 1 */
void init_dog(struct dog *d, char *name, float age, char *owner);
/* Ex 2 */
void print_dog(struct dog *d);
/* Ex 3 */
typedef struct dog dog_t;
/* Ex 4 */
dog_t *new_dog(char *name, float age, char *owner);
/* Ex 5 */
void free_dog(dog_t *d);

#endif
