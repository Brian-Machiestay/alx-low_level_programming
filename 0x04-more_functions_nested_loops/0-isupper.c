#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 *_isupper - check the code.
 *@c: only integer parameter
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
