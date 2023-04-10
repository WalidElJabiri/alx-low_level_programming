#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: vector of C strings
 * Return: 0
 */
int main (int argc, char *argv[])
{
	if (argc > 1 && argc < 4)
	{
		int x = atoi(argv[1]), y = atoi(argv[2]);

		int sum = x * y;

		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
