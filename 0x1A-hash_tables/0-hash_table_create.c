#include <stdio.h>
#include "hash_tables.h"
/**
 *hash_table_create - a function that creates a hash table
 *@size:the size of the table
 *
 *Return: a pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t* table = (hash_table_t*) malloc (sizeof(hash_table_t));

	if (!table)
		return NULL;
    table->size = size;
	table->array = (hash_node_t**) malloc (table->size * sizeof(hash_node_t));
	if (!table->array)
		return NULL;
	return(table);
}
