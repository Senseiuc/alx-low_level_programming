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
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	return ((node == NULL) ? NULL : node->value);
}
