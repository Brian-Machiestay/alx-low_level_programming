#include <stdio.h>
#include "main.h"
#include <math.h>
#include <string.h>

/**
 * binary_to_uint - check the code
 * @b: a string of bits
 * Return: the integer equivalence
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int len;
	const char *ptr = b;

	if (b == NULL)
		return (0);
	len = strlen(b);
	while (len > 0)
	{
		if (*ptr == '1')
		{
			number += (unsigned int)ldexp(1, (len - 1));
			len--;
			ptr++;
		}
		else if (*ptr == '0')
		{
			len--;
			ptr++;
		}
		else
		{
			return (0);
		}
	}
	return (number);
}
