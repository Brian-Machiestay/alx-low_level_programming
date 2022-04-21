#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *puts2 - check the code
 *
 *@str: a pointer variable
 *
 */
void puts2(char *str)
{
	int i;
	int size = strlen(str);

	for (i = 0; i + 1 <= size && i % 2 == 0; i = i + 2)
	{
		putchar(*(str + i));
	}
	putchar('\n');
}
