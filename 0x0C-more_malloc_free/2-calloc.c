#include <stdlib.h>
#include <string.h>

/**
 * _calloc - returns memory to an array
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arraymem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arraymem = malloc(nmemb * size);
	if (arraymem == NULL)
		return (NULL);
	arraymem = memset(arraymem, 0, nmemb * size);
	return (arraymem);
}
