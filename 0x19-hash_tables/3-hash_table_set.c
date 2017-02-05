#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: key
 * @value: value associated with key
 * Return: 1 if successful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newPair, *temp;

	if (ht == NULL)
		return (0);
	if (key == NULL)
		return (0);

	printf("Check1");

	index = key_index((const unsigned char *)key, ht->size);
	/*pointer to hash_node_t - beg of linked list*/
	temp = ht->array[index];
	/*making a node that stores the key values*/
	printf("Check2");

	if (key == NULL || value == NULL)
		return (0);
	newPair = malloc(sizeof(hash_node_t));
	if (newPair == NULL)
		return (0);
	newPair->key = strdup(key);
	if (newPair->key == NULL)
		return (0);
	newPair->value = strdup(value);
	if (newPair->value == NULL)
		return (0);
	newPair->next = NULL;
	*temp = *newPair;

	return (1);
}
