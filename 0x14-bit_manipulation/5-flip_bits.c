#include <stdio.h>
#include "main.h"

/**
 * flip_bits - check the code
 * @n: get from this
 * @m: to this, how many filps?
 * Return: the number of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int xorr;
	int counter = 0;

	xorr = n ^ m;
	while (xorr > 0)
	{
		counter++;
		xorr &= (xorr - 1);
	}
	return (counter);
}
