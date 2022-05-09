#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates space
 * @b: the size of the space
 * Return: returns a pointer
 */
void *malloc_checked(unsigned int b)
{
	void *space = malloc(b);

	if (space == NULL)
		exit(98);
	return (space);
}
