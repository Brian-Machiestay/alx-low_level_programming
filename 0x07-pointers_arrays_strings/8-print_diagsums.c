#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diags
 * @a: the memory area of diag
 * @size: the size of the diag
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int count = 0;
	int forwarddiag = 0;
	int otherdiag = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				forwarddiag += *(a + count);
			}
			if ((i + j) == (size - 1))
			{
				otherdiag += *(a + count);
			}
			count++;
		}
	}
	printf("%d, %d\n", forwarddiag, otherdiag);
}
