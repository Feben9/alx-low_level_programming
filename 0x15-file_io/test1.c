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
	int nrd, nwr;
	char *buf;

	FILE *fp;
	fp  = fopen (filename, "w");
	buf = malloc(sizeof(char) * (letters));
	nrd = read(fp, buf, sizeof(text_content));
	for (i = 0; text_content[i] != '\n'; i++)
	{
		putc(text_content[i], fp);
	}
	close(fp);
	return (1);
}
