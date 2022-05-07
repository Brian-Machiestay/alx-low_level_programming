#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - prints a grid of integers
 * @ac: width of the grid
 * @av: height of the grid
 *
 * Return: a pointer to a pointer.
 */
char *argstostr(int ac, char **av)
{
	unsigned int i;
	unsigned int j = (unsigned int)ac;
	size_t strglen = 0;
	char *all_args, *allargs;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 1; i < j; i++)
	{
		strglen += strlen(av[i]);
	}

	all_args = allargs = (char *)malloc(strglen + ac - 1);
	if (all_args == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
	{
		memcpy(all_args, av[i], strlen(av[i]));
		all_args += strlen(av[i]) + 1;
		*(all_args - 1) = '\n';
	}
	*(all_args - 1) = '\n';
	return (allargs);
}
