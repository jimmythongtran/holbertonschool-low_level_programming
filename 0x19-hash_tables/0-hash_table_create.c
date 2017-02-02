#include "hash_tables.h"
/**
 * hash_table_create - make a hash table containing key, value pairs
 * @size: unsigned long int size to malloc
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	/*declare hash table*/
	hash_table_t *bucket_table;

	/*allocate space for bucket_table*/
	bucket_table = malloc(sizeof(hash_table_t));
	if (bucket_table == NULL)
		return (NULL);
	/*allocate pointers to the head nodes*/
	bucket_table->array = malloc(size * sizeof(hash_node_t *));
	if (bucket_table->array == NULL)
		return (NULL);
	/*bucket_list as big as size of array*/
	bucket_list->size = size;
	return (bucket_table);
}
