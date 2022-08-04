#include "hash_tables.h"

/**
 * key_index - check the code
 * @key: the key
 * @size: the size of the array
 *
 * Return: Always EXIT_SUCCESS.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index % size);
}
