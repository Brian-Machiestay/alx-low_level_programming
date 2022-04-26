#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - prints buffer in hexa
 * @dest: the memory area copied to
 * @src: memory from which n is copied
 * @n: bytes copied to dest
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
