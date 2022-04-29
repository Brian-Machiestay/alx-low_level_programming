#include <string.h>
#include <stdio.h>
#include "main.h"

void _recurse(char *s, int n);
/**
 * _recurse - check the code
 *@s: a pointer
 *@n: an int
 */
void _recurse(char *s, int n)
{
	if (strlen(s) == 0)
	{
		return;
	}
	putchar(*(s + n));
	--n;
	if (n >= 0)
	{
		_recurse(s, n);
	}
}

/**
 * _print_rev_recursion - check the code
 * @s: a pointer
 */
void _print_rev_recursion(char *s)
{
	int n = strlen(s) - 1;

	_recurse(s, n);
}
