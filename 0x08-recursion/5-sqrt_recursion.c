#include "main.h"
#include <stdio.h>

int helpersqrt(int n, int count);
/**
 * helpersqrt - check the code
 * @n: an integer
 * @count: an integer
 * Return: square root
 */
int helpersqrt(int n, int count)
{
	if (count * count == n)
	{
		return (count);
	}
	if (count <= 0)
	{
		return (-1);
	}
	count--;
	return (helpersqrt(n, count));
}
/**
 * _sqrt_recursion - check the code
 * @n: an integer
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (helpersqrt(n, n));
}
