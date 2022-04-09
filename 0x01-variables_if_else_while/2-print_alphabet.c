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
	char alph[27] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;
	
	while (i < 27)
	{
		putchar(alph[i]);
		i++;
	}
	putchar('\n');
}
