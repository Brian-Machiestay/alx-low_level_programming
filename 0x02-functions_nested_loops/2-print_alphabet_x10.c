#include <stdio.h>
/**
 *main-function begins
 *
 *Return:function ends
 */
void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 *print_alphabet_x10-begins here
 *
 *Return:function ends
 */
void print_alphabet_x10(void)
{
	char alp[28] = "abcdefghijklmnopqrstuvwxyz\n";
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 28)
		{
			putchar(alp[j]);
			j++;
		}
		j = 0;
		i++;
	}
}
