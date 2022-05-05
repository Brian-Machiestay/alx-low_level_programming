#include <stdio.h>
#include <stdlib.h>
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

	if (argc - 1 < 2)
	{
		printf("Error\n");
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	return (0);
}
