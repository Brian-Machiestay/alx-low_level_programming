#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * number - check the code.
 *
 *@c: only integer parameter
 *
 * Return: Always 0.
 */

void number(int c)
{
	if (c > 9 && c < 100)
	{
		_putchar(c / 10 + '0');
		_putchar(c % 10 + '0');
	}
	else if (c > 99)
	{
		int m = c / 10;

		_putchar(c / 100 + '0');
		_putchar(m % 10 + '0');
		_putchar(c % 10 + '0');
	}
	else
	{
		_putchar(c + '0');
	}
}

/**
 *print_times_table - check the code
 *
 *@n: integer parameter
 *
 */
void print_times_table(int n)
{
	int i, j, quo, nextquo;

	if (n < 15 && n >= 0)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				quo = i * j;
				nextquo = (j + 1) * i;

				number(quo);
				if (nextquo < 10 && j != n && n != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (nextquo < 100 && j != n && n != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else if (nextquo > 99 && j != n && n != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
