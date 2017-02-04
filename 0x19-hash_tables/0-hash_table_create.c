#include "hash_tables.h"
/**
 * hash_table_create - make a hash table containing key, value pairs
 * @size: unsigned long int size to malloc
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/*declare hash table pointer to array of lists*/
	hash_table_t *hashArray;

	/*allocate space for hasharray*/
	hashArray = malloc(sizeof(hash_table_t));
	if (hashArray == NULL)
		return (NULL);
	/*points to array of list pointers*/
	/*allocate space to hold size lists*/
	hashArray->array = malloc(size * sizeof(hash_node_t *));
	if (hashArray->array == NULL)
		return (NULL);
	/*to the size argument passed in*/
	hashArray->size = size;
	return (hashArray);
}
