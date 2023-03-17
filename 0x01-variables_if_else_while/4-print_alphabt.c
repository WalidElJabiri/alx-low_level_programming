#include <stdio.h>
#include <stdlib.h>
/**
 * main - priny alphabets without q and e
 *
 * Return: Always  0 (Succes)
 */
int main(void)
{
	int i;
	for (i = 97; i < 123; i++)
	{
		if (i != 101 && i != 123)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return(0);
}
