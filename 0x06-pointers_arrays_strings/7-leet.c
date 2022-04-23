#include <string.h>
#include <ctype.h>

/**
 *leet - change all lower case to upper
 *
 *@a: a pointer variable
 *
 *Return: a pointer
 */
char *leet(char *a)
{
	int i;
	int j;
	int size = strlen(a);
	char *toencode = "aAeEoOtTlL";
	char *encode = "4433007711";

	for (i = 0; i < size && size >= 1; i++)
	{
		char m = *(a + i);

		for (j = 0; j < 10; j++)
		{
			if (m == *(toencode + j))
			{
				*(a + i) = *(encode + j);
			}
		}
	}
	return (a);
}
