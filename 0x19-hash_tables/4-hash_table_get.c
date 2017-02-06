#include "hash_tables.h"
/**
 * hash_table_get - retrives a value associated with a key
 * @ht: hash table you want to look into
 * @key: key to look for
 * Return: value associated with element or NULL if key can't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);
	/*get index for value*/
	index = key_index((const unsigned char *)key, ht->size);
	/*head of linked list array*/
	temp = ht->array[index];
	if (temp == NULL)
		return (NULL);
	else
		return (temp->value);

	while (temp->next !=  NULL)
		temp = temp->next;
}
