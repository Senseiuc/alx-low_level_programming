#include "hash_tables.h"
/**
 *hash_table_get -  a function that retrieves a value associated with a key
 *@ht:the hash table
 *@key: the jey to get
 *
 *Return: the value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *value;

	value = ht->array[index];
	if (value == NULL)
		return (NULL);
	else if (strcmp(value->key, key) == 0)
		return (value->value);
	else if (value->next->key)
	{
		while (value->next->key)
		{
			if (strcmp(value->next->key, key) == 0)
				return (value->next->value);
			value = value->next;
		}
	}
	return (NULL);
}
