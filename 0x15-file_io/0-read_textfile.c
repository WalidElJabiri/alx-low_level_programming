#include <stdlib.h>
#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: ptr to the file namre
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buff;

	if (filename == NULL)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	op = open(filename, O_RDONLY);
	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);
	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(op);
	return (wr);
}
