#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _pow_recursion - check the code
 * @x: the number to raise to a power
 * @y: the power to raise
 * Return: An integer.
 */
int _pow_recursion(int x, int y)
{
	int power;
	if (y < 0)
	{
		return (-1);
	}
	power = (int)pow(x, y);
	return (power);
}
