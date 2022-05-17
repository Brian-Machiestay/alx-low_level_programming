#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - check the code
 * @separator: constant integer
 * @n: number of variable args
 * Return: an int.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int j;

	va_start(list, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(list, int));
		if (separator != NULL && j != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
