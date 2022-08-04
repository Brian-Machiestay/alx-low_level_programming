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
	hash_node_t *ptr;

	if (key == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);
	if (node->value == NULL || node->key == NULL)
		return (0);
	strcpy(node->value, value);
	idx = key_index((unsigned char *)key, ht->size);

	if ((ht->array)[idx] == NULL)
		(ht->array)[idx] = node;
	else
	{
		ptr = (ht->array)[idx];
		(ht->array)[idx] = node;
		node->next = ptr;
	}
	return (1);
}
