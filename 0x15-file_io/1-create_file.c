#include "main.h"
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, i;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
		{
			i++;
		}
	}
	op = open(filename O_CREAT | O_POWR | O_TRUNC, 0600);
	wr = write(op, text_content, i);
	if (op == -1 || wr == -1)
	{
		return (-1);
	}
	close(op);
	return (1);
}
