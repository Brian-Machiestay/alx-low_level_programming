#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - check the code
 *@c: only integer parameter
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
