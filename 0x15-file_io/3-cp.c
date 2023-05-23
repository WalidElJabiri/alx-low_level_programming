#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_buff - creating a buffer
 * @file: the file storing the buff
 * Return: buff
 */
char *new_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
 * close_fd - closes fd
 * @fd: the file discriptor
 */
void close_fd(int fd)
{
	int cl = close(fd);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - cpying the content of a file to another
 * @argc: argument count
 * @argv: a vector of C strings
 * Return: 0
 */
int main (int argc, char* argv[])
{
	int r, w, fl1, fl2;
	char* buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = new_buff(argv[2]);
	fl1 = open(argv[1], O_RDONLY);
	r = read(fl1, buff, 1024);
	fl2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fl1 == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		w = write(fl2, buff, r);
		if (fl2 == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(fl1, buff, 1024);
		fl2 = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buff);
	close_fd(fl1);
	close_fd(fl2);
	return (0);
}
