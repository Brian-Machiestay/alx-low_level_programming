#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - prints a grid of integers
 * @grid: the grid
 * @height: height of the grid
 *
 * Return: a pointer to a pointer.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
