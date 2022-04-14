#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - check the code.
 *@c: integer return type
 * Return: Always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
