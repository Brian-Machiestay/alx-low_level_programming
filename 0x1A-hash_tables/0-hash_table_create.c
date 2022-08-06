#include "hash_tables.h"

/**
 * hash_table_create - check the code for
 * @size: the size of the array
 * Return: the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t *node;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	node = malloc(sizeof(node) * size);
	if (node == NULL)
		return (NULL);
	table->array = &node;
	return (table);
}
