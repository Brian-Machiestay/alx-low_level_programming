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

void checkfileto(int c, char **av);
void checkfilefrom(int c, char **av);
void checkclose(int c, int fd);

/**
 * checkfileto - check the code
 * @c: the # of args
 * @av: the args
 */
void checkfileto(int c, char **av)
{
	if (c < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}


/**
 * checkfilefrom - check the code
 * @c: the # of args
 * @av: the args
 */
void checkfilefrom(int c, char **av)
{
	if (c < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
}


/**
 * checkclose - check the code
 * @c: the close value
 * @fd: the file descriptor
 */
void checkclose(int c, int fd)
{
	if (c < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(0);
	}
}


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
	int fr;
	int fw;
	char buf[1024];
	int closev1;
	int closev2;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, perm);
	checkfileto(fd1, av);
	fd = open(av[1], O_RDONLY);
	checkfilefrom(fd, av);
	fr = read(fd, buf, 1023);
	checkfilefrom(fr, av);
	fw = write(fd1, buf, fr);
	checkfileto(fw, av);
	while (fr > 0)
	{
		fr = read(fd, buf, 1023);
		fw = write(fd1, buf, fr);
	}
	closev1 = close(fd);
	checkclose(closev1, fd);
	closev2 = close(fd1);
	checkclose(closev2, fd1);
	return (0);
}
