#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - check the code
 * @filename: the name of the file to read from
 * @letters: the number of letters to read
 * Return: the actual number of bytes read and written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fides;
	ssize_t refile;
	ssize_t let = (ssize_t)letters;

	buf = malloc(letters);
	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	fides = open(filename, O_RDONLY);
	if (fides < 0)
		return (0);
	read(fides, buf, letters);

	refile = write(1, buf, letters);

	if (fides < 0 || refile < 0 || refile < let)
		return (0);
	close(fides);
	free(buf);
	return (refile);
}
