#include <stdio.h>
#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: name of file
 * @text_content: string to write into the file
 *
 * Return: 1 for success -1 for failure
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int nrd, nwr;
	char *buf;

	if (!filename)
		return (-1);
	fp = open(filename, O_RDWR);
	if (fp == -1)
		return (0);
	buf = malloc(sizeof(char) * sizeof(text_content));
	if (!buf)
	{
		nrd = read(fp, buf, NULL);
		nwr = write(STDOUT_FILENO, buf, nrd);
	}
	nrd = read(fp, buf, sizeof(text_content));
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fp);

	free(buf);

	return (1);
}
