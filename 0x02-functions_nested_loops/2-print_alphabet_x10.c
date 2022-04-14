#include <stdio.h>
#include "main.h"
/**
 *print_alphabet_x10-begins here
 *
 *Return:function ends
 */
void print_alphabet_x10(void)
{
	char alp[28] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 27)
		{
			putchar(alp[j]);
			j++;
		}
		j = 0;
		i++;
	}
}
