#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code
 * @argc: an int
 * @argv: an array
 * Return: an integer
 */
int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int i;
	int j;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			j = atoi(argv[i]);
			if (isdigit(j) != 0)
			{
				printf("Error\n");
				return (1);
			}
			j = atoi(argv[i]);
			add += j;
		}
		printf("%d\n", add);
	}
	return (0);
}
