#include "main.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * _memset - prints buffer in hexa
 * @s: the memory area
 * @b: the byte to fill
 * @n: unsigned int
 * Return: a pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int c = toascii(b);

	return (memset(s, c, n));
}
