#include "hash_tables.h"
/**
 * hash_table_create - Create a hash table
 * @size: Size of array
 *
 * Return: Pointer to hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	new_hash = malloc(sizeof(unsigned long int) * size);
	if (new_hash == NULL)
	{
		return (NULL);
	}
	return (new_hash);
}
