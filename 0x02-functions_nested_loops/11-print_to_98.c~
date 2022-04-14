#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 *print_last_digit - check the code.
 *@n: integer return type
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		n = abs(n);
	}
	if (n == INT_MIN)
	{
		_putchar(8 + '0');
		return (8);
	}
	last = n % 10;
	_putchar(last + '0');
	return (last);
}
