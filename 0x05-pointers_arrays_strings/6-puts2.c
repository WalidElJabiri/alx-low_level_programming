#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int a = 0;
	char *c = str;
	int b;

	while (*y != '\0')
	{
		c++;
		i++;
	}
	a = i - 1;
	for (b = 0; b <= a; a++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
