#include "main.h"
/**
 * puts2 - print every other character of a string,
 * starting with the first character
 * @str: the string
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int a;
	char *c;
	int b;

	i = 0;
	a = 0;
	*c = str;
	while (*c != '\0')
	{
		c++;
		i++;
	}
	a = i - 1;
	for (b = 0; b <= a; b++)
	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
	}
	_putchar('\n');
}
