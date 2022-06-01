#include <stdio.h>
#include "main.h"

/**
 * print_binary - check the code
 * @n: the number to convert
 */
void print_binary(unsigned long int n)
{
	unsigned long int i = 31;
	int j = 0;
	int count = 31;
	int temp = 0;

	if (n > 4294967295)
		return;
	if (n == 0)
		putchar('0');

	while (count >= 0)
	{
		j = (int)((n >> (i)) & 1);
		if (j & 1)
		{
			temp = 1;
			putchar('1');
		}
		else
		{
			if (temp == 1)
				putchar('0');
		}
		i--;
		count--;
	}
}
