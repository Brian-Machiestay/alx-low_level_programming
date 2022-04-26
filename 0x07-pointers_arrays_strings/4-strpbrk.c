#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - check the code
 * @s: the string to search accept in
 * @accept: the string to search
 * Return: a pointer.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
