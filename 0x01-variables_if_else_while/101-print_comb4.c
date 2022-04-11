#include <stdio.h>
/**
 *main-function begins
 *
 *Return:function ends
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int k = 2;
	int jcount = 1;
	int kcount = 2;
	int count = 2;
	int Ccount = 2;

	for (; i < 8; i++)
	{
		for (; j < 9; j++)
		{
			for (; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (!(i == 7 && j == 8 && k == 9))
				{
					putchar(44);
					putchar(32);
				}
			}
			count++;
			k = count;
		}
		jcount++;
		kcount++;
		Ccount++;
		j = jcount;
		k = kcount;
		count = Ccount;
	}
	putchar('\n');
	return (0);
}
