#include <stdio.h>
#include "main.h"

/**
 *print_alphabet-function begins
 *
 *Return:function ends
 */
void print_alphabet(void)
{
	char alp[28] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (i < 28)
	{
		putchar(alp[i]);
		i++;
	}
}
