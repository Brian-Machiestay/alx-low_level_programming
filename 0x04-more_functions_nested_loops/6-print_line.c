#include "main.h"
#include <stdio.h>

/**
 *print_line - check the code
 *@n: integer parameter
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
