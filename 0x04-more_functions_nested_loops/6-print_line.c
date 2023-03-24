#include "main.h"
/**
 * print_line - draw a straight line in the terminal
 * @n: lines num
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n > 0)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
