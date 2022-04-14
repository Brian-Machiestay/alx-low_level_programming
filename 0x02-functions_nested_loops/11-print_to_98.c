#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 *void print_to_98 - check the code.
 *@n: integer return type
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		putchar (i + '0');
		if (i != 98)
		{
			putchar (',');
			putchar (' ');
			putchar (' ');
		}
	}
}
