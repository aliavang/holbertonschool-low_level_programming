#include "hash_tables.h"
/**
 * key_index - Retrieve index of key
 * @key: Key
 * @size: Size of array
 *
 * Return: Index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key);
	i = i % size;
	return (i);
}
