#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print lower and upper alphabets using putchar()
 * Return: always 0 (succes)
 */
int main(void)
{
	char c;
	char b;

	for (c = 'a'; c <= 'z'; ++c)
	{
		putchar(c);
	}
	for (b = 'A'; b <= 'Z'; ++b)
	{
		putchar(b);
	}
		putchar('\n');
	return (0);
}
