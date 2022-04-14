#include "main.h"
#include <stdio.h>

/**
 *print_line - check the code
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
