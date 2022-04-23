#include <string.h>
/**
 *_strncat - concat two strings using at most n bytes
 *
 *@dest: a pointer variable
 *@src: a pointer variable
 *@n: an int variable
 *
 *Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
