#include <stdio.h>
#include "main.h"

/**
 * get_endianness - check the code
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int thisx = 1;
	char *y = (char *)&thisx;

	return (*y + 48);
}
