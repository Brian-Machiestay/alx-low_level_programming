#include "hash_tables.h"
/**
 * hash_table_set - check the code
 * @ht: the hash table
 * @key: the key
 * @value: the value
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node = NULL;

	if (key == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	idx = key_index((unsigned char *)key, ht->size);

	if ((ht->array)[idx] == NULL || !(ht->array)[idx])
		(ht->array)[idx] = node;
	else
	{
		node->next = (ht->array)[idx];
		(ht->array)[idx] = node;
	}
	return (1);
}
