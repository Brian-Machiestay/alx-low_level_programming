#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - check the code for ALX School students.
 * @str: a pointer to the string
 * Return: a pointer to the memory
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	return (strdup(str));
}
