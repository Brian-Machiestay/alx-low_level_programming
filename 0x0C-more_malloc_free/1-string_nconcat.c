#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - return a space
 * @s1: a pointer param
 * @s2: another pointer param
 * @n: an integer param
 * Return: a pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1size;
	int s2size;
	int toprint = (int)n;
	int m;
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
	if (s2size >= toprint)
		s2size = toprint;
	m = s1size + s2size;
	memory = malloc(sizeof(char) * m);
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
		for (j = 0; j < toprint; i++, j++)
		{
			*(memory + i) = *(s2 + j);
			if (j >= s2size)
				break;
		}
	}
	*(memory + m) = '\0';
	return (memory);
}
