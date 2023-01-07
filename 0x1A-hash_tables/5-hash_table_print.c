#include "hash_tables.h"
/**
 *hash_table_print -  a function that prints a hash table
 *@ht:the hash table
 *
 *Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int j = 0;
	hash_node_t *n_n;

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] && j == 0)
			{
				printf("'%s':'%s'", ht->array[i]->key, ht->array[i]->value);
				j = 1;
			}
			else if (ht->array[i])
			{
				printf(", '%s':'%s'", ht->array[i]->key, ht->array[i]->value);
			}
			if (ht->array[i])
			{
				n_n = ht->array[i]->next;
				while (n_n)
				{
					printf(", '%s':'%s'", n_n->key, n_n->value);
					n_n = n_n->next;
				}
			}
		}
		printf("}\n");
	}
}
