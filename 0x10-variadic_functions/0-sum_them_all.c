#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code
 * @n: constant integer
 * Return: an int.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int i;
	int count = 0;
	unsigned int j;

	if (n == 0)
		return (0);

	va_start(list, n);
	i = va_arg(list, int);

	for (j = 0; j < n; j++)
	{
		count += i;
		i = va_arg(list, int);
	}
	va_end(list);

	return (count);
}
