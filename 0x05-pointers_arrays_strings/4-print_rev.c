#include "main.h"
/**
 * print_rev - print a string, in reverse
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int a;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (a = i; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
