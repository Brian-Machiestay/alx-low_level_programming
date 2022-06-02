#include <stdio.h>
#include "main.h"

/**
 * get_bit - check the code
 * @n: the integer
 * @index: the index to get
 * Return: a binary
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 31;
	int j = 0;
	int count = 31;
	unsigned int counter = 31;

	if (n == 0 && index == 0)
		return (0);

	while (count >= 0)
	{
		j = (int)((n >> (i)) & 1);
		if ((j & 1) == 1)
		{
			if (index == counter)
				return (1);
		}
		else
		{
			if (index == counter)
			return (0);
		}
		counter--;
		i--;
		count--;
	}
	return (-1);
}
