#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_file - check the code
 * @filename: the filename to create
 * @text_content: the content to write to the file
 * Return: a success or failure value
 */

int create_file(const char *filename, char *text_content)
{
	int newfile;
	int size;

	if (filename == NULL)
		return (-1);
	newfile = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (newfile < 0)
		return (-1);
	if (text_content != NULL)
	{
		size = strlen(text_content);
		newfile = write(newfile, text_content, size);
		if (newfile < 0)
			return (-1);
	}
	return (1);
}
