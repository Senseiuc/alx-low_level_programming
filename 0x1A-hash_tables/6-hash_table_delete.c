#include "hash_tables.h"
/**
 *hash_table_delete - a function that deletes a hash table
 *@ht: the hash table
 *
 *Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	/*hash_node_t *temp;*/
	if (ht)
	{
		while (i < ht->size)
		{
			/*if (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				while(temp != NULL)
				{
					temp = ht->array[i];
					ht->array[i] = ht->array[i]->next;
					free(temp->key);
					free(temp->value);
					free(temp);
				}
			}*/
			free(ht->array[i]);
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
