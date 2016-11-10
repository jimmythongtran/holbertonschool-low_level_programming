#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory needed
 * Return: Pointer to address of the memory
 */
void *malloc_checked(unsigned int b)
{
	void *address;

	address = malloc(b);
	if (address == NULL)
		exit(98);
	return (address);
}
