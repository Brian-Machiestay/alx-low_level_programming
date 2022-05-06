#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: a pointer to the allocated space.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int memory = size * sizeof(char);
	char *allocated = malloc(memory);
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (allocated == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < memory; i++)
		{
			allocated[i] = c;
		}
	}
	return (allocated);
}
