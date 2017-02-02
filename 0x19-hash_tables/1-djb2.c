#include "hash_tables.h"
/**
 * hash_djb2 - creates hash value for string
 * @str: string that needs a created hash value
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while (c = *str++)
	hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	return (hash);
}
