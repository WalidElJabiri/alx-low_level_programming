#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * contsymbol - function that checks if the str contain symbol
 * @str: the string that gonna be checked
 * Return: 1
 */
int is_num(char *str) {
	unsigned int i = 0;

	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: vector of C strings
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int to_int;
	int sum = 0;

	i = 0;
	while (i < argc)
	{
		if (is_num(argv[i]))
		{
			to_int = atoi(argv[i]);
			sum = sum + to_int;
 		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
