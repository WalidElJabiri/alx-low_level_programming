#include "main.h"

/**
 * print_sign - check if int is lower
 * @n: the int that will be checked
 * Return: 1 if > 0, -1 if < 0, else 0
 */
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		_putchar(n);
		return (1);
	}
	else if (n < 48)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar(n);
		return (-1);
	}
	else
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(n);
		return (0);
	}
}
