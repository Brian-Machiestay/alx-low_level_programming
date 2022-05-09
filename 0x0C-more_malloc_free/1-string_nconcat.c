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
	int s2size = n;
	char *new_string;
	int total;

	s1size = strlen(s1);
	if (s2 == NULL)
	{
		s2size = 0;
	}
	else if (n >= strlen(s2))
		s2size = strlen(s2);
	total = s1size + s2size;
	new_string = malloc(sizeof(char) * total + 1);
	if (new_string == NULL)
		return (NULL);
	new_string = strcat(new_string, s1);
	if (s2size == 0)
		return (new_string);
	new_string = strncat(new_string, s2, n);
	return (new_string);
}
