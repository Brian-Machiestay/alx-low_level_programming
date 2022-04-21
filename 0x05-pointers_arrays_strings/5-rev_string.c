#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *rev_string - check the code
 *
 *@s: a pointer variable
 *
 */
void rev_string(char *s)
{
	int size = strlen(s);
	int loopcnt = (size - 1) / 2;
	int i;

	for (i = 0; i <= loopcnt && size > 0; i++, size--)
	{
		char c = *(s + i);
		*(s + i) = *(s + (size - 1));
		*(s + (size - 1)) = c;
	}
}
