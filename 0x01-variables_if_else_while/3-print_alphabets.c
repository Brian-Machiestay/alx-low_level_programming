#include <stdio.h>
/**
 *main-function begins
 *
 *Return: function ends
 */
int main(void)
{
	char alph[27] = "abcdefghijklmnopqrstuvwxyz";
	char bigalph[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i = 0;

	while (i < 26)
	{
		putchar(alph[i]);
		i++;
	}
	i = 0;
	while (i < 27)
	{
		putchar(bigalph[i]);
		i++;
	}
	return (0);
}
