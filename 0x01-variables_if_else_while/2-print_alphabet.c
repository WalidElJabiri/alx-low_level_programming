#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - prints the alphabet in lowercase.
 *
 * Return: always 0 (succes)
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
		putchar('\n');
	return (0);
}
