#include <string.h>
#include <ctype.h>

/**
 *string_toupper - change all lower case to upper
 *@a: a pointer variable
 *Return: a pointer
 */
char *string_toupper(char *a)
{
	int i;
	int size = strlen(a);

	for (i = 0; i < size; i++)
	{
		int charint = toascii(*(a + i));

		*(a + i) = toupper(charint);
	}
	return (a);
}
