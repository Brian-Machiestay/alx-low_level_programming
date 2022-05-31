#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define perm (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - check the code
 * @ac: the # of args
 * @av: the args
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int fd;
	int fd1;
	int fw;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, perm);
	if (fd1 < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd = read(fd, buf, 1024);
	if (fd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fw = write(fd1, buf, fd);
	if (fw < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (fd > 0)
	{
		fd = read(fd, buf, 1024);
		fw = write(fd1, buf, fd);
	}
	return (0);
}
