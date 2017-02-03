#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: key to find its index
 * @size: size of array for hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	/*hash_djb2 creates hash value*/
	value = hash_djb2(key);
	/*modular hashing*/
	value = value % size;
	return (value);
}
