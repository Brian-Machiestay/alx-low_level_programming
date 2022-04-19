#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * times_table - check the code.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int j;
	int quo;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			quo = i * j;

			if (quo > 9)
			{
				_putchar(quo / 10 + '0');
				_putchar(quo % 10 + '0');
			}
			else
			{
				_puchar(quo + '0');
			}
		}
		_putchar('\n');
	}
}
