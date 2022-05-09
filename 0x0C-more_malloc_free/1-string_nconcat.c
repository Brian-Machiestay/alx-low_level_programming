#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int memory(char *mem);
/**
 * memo - return a space
 * @mem: a pointer param
 * Return: an integer.
 */
int memo(char *mem)
{
	int size;

	if (mem != NULL)
		size = strlen(mem);
	else
		size = 0;
	return (size);
}
/**
 * string_nconcat - return a space
 * @s1: a pointer param*
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

	s1size = memo(s1);
	s2size = memo(s2);
	if (s2size >= toprint)
		s2size = toprint;
	m = s1size + s2size;
	memory = malloc(sizeof(char) * m + 1);
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
