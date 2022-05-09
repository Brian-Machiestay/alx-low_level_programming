#include <stdlib.h>
#include <string.h>

/**
 * array_range - prints buffer in hexa
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: an integer
 */
int *array_range(int min, int max)
{
	int i;
	int j;
	int *arr;
	int n = 0;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	arr = malloc(sizeof(int) * j);
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		*(arr + n) = i;
		n++;
	}
	return (arr);
}
