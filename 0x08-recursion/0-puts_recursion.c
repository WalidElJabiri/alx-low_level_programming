#include "main.h"
/**
 * _puts_recursion -  prints a string, followed by a new line.
 * @s: the char in the str
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
