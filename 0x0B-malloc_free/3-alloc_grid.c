#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: a pointer to a pointer.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **array = (int **)malloc(height * sizeof(int*));

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int) * height * width);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = (int*)malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
