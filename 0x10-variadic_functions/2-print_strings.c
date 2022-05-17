#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - check the code
 * @separator: constant integer
 * @n: number of variable args
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	va_list samelist;
	unsigned int j;
	int i;

	va_start(list, n);
	va_start(samelist, n);

	for (j = 0; j < n; j++)
	{
		i = va_arg(list, int);
		if (!i)
		{
			printf("(nil)");
			va_arg(samelist, int);
		}
		else
		{
			vprintf("%s", samelist);
		}
		if (separator != NULL && j != n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
	va_end(samelist);
}
