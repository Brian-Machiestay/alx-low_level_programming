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
	int nextquo;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			quo = i * j;
			nextquo = (j + 1) * i;

			if (quo > 9)
			{
				_putchar(quo / 10 + '0');
				_putchar(quo % 10 + '0');
			}
			else
			{
				_putchar(quo + '0');
			}
			if (nextquo < 10 && j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (nextquo > 9 && j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
