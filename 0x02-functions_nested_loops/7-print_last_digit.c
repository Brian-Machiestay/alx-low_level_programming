#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
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
	last = n % 10;
	_putchar(last + '0');
	return (last);
}
