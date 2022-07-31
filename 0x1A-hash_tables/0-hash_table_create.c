#include "hash_tables.h"

/**
 * hash_table_create - check the code for
 * @size: the size of the array
 * Return: the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;
	hash_node_t *nodes;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	nodes = malloc(sizeof(hash_node_t) * size);
	if (nodes == NULL)
		return (NULL);
	table->size = size;
	table->array = &nodes;
	return (table);
}
