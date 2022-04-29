#include "main.h"
#include <stdio.h>

long int helpersqrt(long int n, long int count);
/**
 * helpersqrt - check the code
 * @n: an integer
 * @count: an integer
 * Return: square root
 */
long int helpersqrt(long int n, long int count)
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
	long int count = n;
	long int m = n;

	return ((int)helpersqrt(m, count));
}
