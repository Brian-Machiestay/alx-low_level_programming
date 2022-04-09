#include <stdio.h>
/**
 *main-function begins
 *
 *Return: function ends
 */
int main(void)
{
	int i = 0;
	char j = 'a';

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
