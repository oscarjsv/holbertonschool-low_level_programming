#include "hash_tables.h"
/**
 * hash_table_create - function to create the hash table
 * @size: size of hash table
 * Return: ht
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);

	ht->size = size;
	return (ht);
}
