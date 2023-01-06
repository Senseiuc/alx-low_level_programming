#include "hash_tables.h"
/**
 *key_index - a function that returns the index of a key
 *@key:a string to be hashed
 *@size:the size of the array of the hash table
 *
 *Return:the key index(integer)
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
