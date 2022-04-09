#include <stdio.h>
/**
 *main-function begins
 *
 *Return: function ends
 */
int main(void)
{
	char alph[27] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;

	while (i < 27)
	{
		putchar(alph[i]);
		i++;
	}
	return (0);
}
