#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *puts_half - check the code
 *
 *@str: a pointer variable
 *
 */
void puts_half(char *str)
{
	int i;
	int size = strlen(str);
	int n;

	n = size / 2;
	if (size % 2 == 0)
	{
		n = (size - 1) / 2;
	}
	for (i = n; i >= size - 1; i++)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
