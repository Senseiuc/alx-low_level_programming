#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
	unsigned long int key;
	char *s;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "hetairas", "cooler");
	hash_table_set(ht, "mentioner", "cooler2");
	s = "betty";
	key = key_index((unsigned char *)s, ht->size);

	printf("%s", ht->array[key]->value);
    return (EXIT_SUCCESS);
}
