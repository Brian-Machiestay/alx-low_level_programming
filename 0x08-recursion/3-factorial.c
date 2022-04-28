#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: an integer param
 * Return: an integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (factorial(n - 1) * n);
}
