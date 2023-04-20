#include <stdlib.h>
#include <stdio.h>
/**
 * opcodes - prints the opcodes
 * @p: pointer to address of main func
 * @num: num of bytes
 */
void opcodes(char *p, int num)
{
	int i = 0;

	while (i < num)
	{
		printf("%.2hhx", p[i]);
		if (i < num - 1)
		{
			printf(" ");
		}
		i++;
		printf("\n");
	}
}
/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: a vector of C strings
 * Return: 0
 */
int main(int argc, char **argv)
{
	int a;

	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	opcodes((char *)&main, a);
	return (0);
}
