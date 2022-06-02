#include <stdio.h>
#include "main.h"

/**
 * set_bit - check the code
 * @n: the whose bit to set
 * @index: the index bit to set
 * Return: the number to return
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 31)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
