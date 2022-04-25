#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * rot13 - check the code
 * @a: a pointer
 * Return: A pointer.
 */
char *rot13(char *a)
{
	char alph[104] = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz";
	char *bigalph = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;
	int j;
	int size = strlen(a);

	strcat(alph, bigalph);
	for (i = 0; i < size && size > 0; i++)
	{
		char m = *(a + i);

		for (j = 0; j < 104; j++)
		{
			if (m == *(alph + j))
			{
				*(a + i) = *(alph + j + 13);
				break;
			}
		}
	}
	return (a);
}
