#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - check the code
 * @s: the string assumed to contain all of accept
 * @accept: the bytes to check
 * Return: an unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
