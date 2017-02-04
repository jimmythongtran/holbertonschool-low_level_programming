#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: key
 * @value: value associated with key
 * Return: 1 if successful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
{
		unsigned long int index;
		hash_node_t *newPair, *temp;

		if (ht == NULL)
				return (0);
		if (key == NULL)
				return (0);

		index = key_index(const unsigned char *)key, ht->size);
		if (ht->array[index])
		{
				temp = ht->array[index];
				while (temp)
				{
						/*two strings equal only if they have same characters in same order*/
						if (strcmp(temp->key, key))
						{
								temp->key = strdup(key);
								break;
						}
						temp = tmp->next;
				}
				return (1);
		}	
/*add node to hash table*/
		newPair = malloc(sizeof(hash_node_t));
		if (newPair == NULL)
				return (0);
		/*calculates the space needed and allocates it and copies the source string into the newly allocated space*/
		newPair->key = (strdup)key;
		newPair->value = (strdup)value;
		newPair->next = NULL;


}
