#include <stdio.h>
/**
 *main-function
 *
 *Return: function ends
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int count = 1;

	for (i = 0; i < 9; i++)
	{
		for (; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (!(i == 8 && j == 9))
			{
				putchar(44);
				putchar(32);
			}
		}
		count++;
		j = count;
	}
	putchar('\n');
	return (0);
}
