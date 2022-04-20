#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 *print_to_98 - check the code.
 *
 *@n: integer return type
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int i;

	if (n < 99)
	{
		for (i = n; i < 99; i++)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}

	else
	{
		for (i = n; i > 97; i--)
		{
			printf("%d", i);

			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	putchar('\n');
}
