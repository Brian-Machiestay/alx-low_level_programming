#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - check the code for ALX School students.
 * @s1: the first string memory
 * @s2: the second string memory
 * Return: a pointer
 */
char *str_concat(char *s1, char *s2)
{
	int s1size = strlen(s1);
	int s2size = strlen(s2);
	int n = s1size + s2size + 1;
	char *memory = malloc(sizeof(char) * n);
	int i = 0;
	int j;

	if (memory == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		for (i = 0; i < s1size; i++)
		{
			*(memory + i) = *(s1 + i);
		}
	}
	if (s2 != NULL)
	{
		for (j = 0; i < n; i++, j++)
		{
			*(memory + i) = *(s2 + j);
		}
	}
	*(memory + n) = '\0';
	return (memory);
}
