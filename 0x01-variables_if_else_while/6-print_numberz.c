#include <stdio.h>
#include <assert.h>
/**
 *main-function begins
 *
 *Return: function ends
 */
int main(void)
{
	char digits[11] = "0123456789";
	int i = 0;
	while (i < 10)
	{
		putchar("%c", digits[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
