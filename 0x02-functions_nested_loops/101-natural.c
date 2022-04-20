#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *main - check the code
 *
 *Return: always 0
 */

int main(void)
{
	int n = 1024;
	int count = 0;
	int i;

	for (i = 1; i < n; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			count = count + i;
		}
	}
	printf("%d\n", count);
	return (0);
}
