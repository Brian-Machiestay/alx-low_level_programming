#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main-Function begins here
 *
 *Return:function ends
 */
int main(void)
{
	char alph[27] = "abcdefghijklmnopqrstuvwxyz";
	char bigalph[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	int i = 0;
	
	while (i < 27)
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
