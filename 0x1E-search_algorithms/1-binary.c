#include "search_algos.h"

/**
 * print_sub - print the subarray being searched
 * @lo: the least index
 * @hi: the highest index
 * @array: the sub-array to print
 */
void print_sub(int *array, int lo, int hi)
{
	int i;

	printf("Searching in array: ");
	for (i = lo; i <= hi; i++)
	{
		printf("%d", array[i]);
		if (i != hi)
			printf(", ");
		else if (i == hi)
			printf("\n");
	}
}
/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 * Return: index if successful -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int lo;
	int hi;
	int m;

	if (!array)
		return (-1);
	lo = 0;
	hi = size - 1;
	m = 0;
	print_sub(array, lo, hi);
	while (lo < hi)
	{
		m = (lo + hi);
		if (m % 2 != 0)
			m = (m - 1) / 2;
		else
			m = m / 2;
		if (array[m] < value)
			lo = m + 1;
		else if (array[m] > value)
			hi = m - 1;
		else
			return (m);
		print_sub(array, lo, hi);
	}
	return (-1);
}
