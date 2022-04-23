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
	char m;
	char *toencode = "aBeEoOtTlL";
	char *encode = "4433007711";

	for (i = 0; *(a + i) != '\0'; i++)
	{
		m = *(a + i);

		for (j = 0; j < 10; j++)
		{
			if (m == *(toencode + j))
			{
				*(a + i) = *(encode + j);
				break;
			}
		}
	}
	return (a);
}
