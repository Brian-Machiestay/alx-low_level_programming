#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *print_rev - check the code
 *
 *@s: a pointer variable
 *
 */
void print_rev(char *s)
{
	int i;
	int size = strlen(s);

	for (i = size - 1; i > -1; i--)
	{
		putchar(*(s + i));
	}
	putchar('\n');
}
