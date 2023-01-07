#include "hash_tables.h"
/**
 *hash_table_set - A function that adds an element to the hash table
 *@ht:the hash table you want to add or update the key/value to
 *@key:the key to the value
 *@value:the value associated with the key.
 *
 *Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_indx;
	hash_node_t *item;
	hash_node_t *current_item;

	item = create_item(key, value);
	key_indx = key_index((unsigned char *)key, ht->size);
	current_item = ht->array[key_indx];
	if (item == NULL)
		return (0);
	if (current_item == NULL)
		ht->array[key_indx] = item;
	else
	{
		item->next = current_item;
		ht->array[key_indx] = item;
	}
	return (1);
}

/**
 *create_item - A function that creates an item for the table
 *@key:the key to the value
 *@value:the value associated with the key.
 *
 *Return: a pointer to the item created
 */
hash_node_t *create_item(const char *key, const char *value)
{
	hash_node_t *item = (hash_node_t *) malloc(sizeof(hash_node_t));

	if (item == NULL)
		return (NULL);
	if (key[0] == '\0')
		return (NULL);
	item->key = (char *) malloc(strlen(key) + 1);
	item->value = (char *) malloc(strlen(value) + 1);
	if (item->key == NULL || item->value == NULL)
		return (NULL);
	strcpy(item->key, key);
	strcpy(item->value, value);
	return (item);
}
