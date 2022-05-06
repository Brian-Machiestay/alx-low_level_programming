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
	int s1size;
	int s2size;
	int n;
	char *memory;
	int i = 0;
	int j;

	if (s1 != NULL)
		s1size = strlen(s1);
	else
		s1size = 0;
	if (s2 != NULL)
		s2size = strlen(s2);
	else
		s2size = 0;
	n = s1size + s2size + 1;
	memory = malloc(sizeof(char) * n);
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
		for (j = 0; j < s2size; i++, j++)
		{
			*(memory + i) = *(s2 + j);
		}
	}
	*(memory + n) = '\0';
	return (memory);
}
