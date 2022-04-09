#include <stdio.h>
/**
 *main-function begins
 *
 *Return: function ends
 */
int main(void)
{
	char alph[27] = "abcdfghijklmnoprstuvwxyz\n";
	int i = 0;

	while (i < 27)
	{
		if (alph[i] != 'e' || alph[i] != 'q')
		{
			putchar(alph[i]);
			i++;
		}
	}
}
