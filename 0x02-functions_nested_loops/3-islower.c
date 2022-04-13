#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code.
 *@c: first member
 * Return: Always 0.
 */

int _islower(int c);

int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	r = _islower('o');
	putchar(r + '0');
	r = _islower(108);
	putchar(r + '0');
	putchar('\n');
	return (0);
}

/**
 *_islower-function begins
 *@c: an integer type c
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
