#include <string.h>

/**
 * _strncpy - copies a string
 *
 *@dest: a pointer
 *@src: another pointer
 *@n: an integer variable
 *
 *Return: a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
