#include <stdio.h>
#include <stdlib.h>
/**
 * main - priny alphabets without q and e
 *
 * Return: Always  0 (Succes)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
