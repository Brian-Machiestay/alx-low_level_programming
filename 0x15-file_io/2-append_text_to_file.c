#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * append_text_to_file - check the code
 * @filename: the filename to create
 * @text_content: the content to write to the file
 * Return: a success or failure value
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int size = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		size = strlen(text_content);
		fd = write(fd, text_content, size);
		if (fd < 0)
			return (-1);
	}
	return (1);
}
