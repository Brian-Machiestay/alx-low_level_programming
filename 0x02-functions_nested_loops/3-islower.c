#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 *_islower-function begins
 *@c: an integer type c
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
