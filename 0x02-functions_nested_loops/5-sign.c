#include "main.h"

/**
 * print_sign - check if int is lower
 * @n: the int that will be checked
 * Return: 1 if > 0, -1 if < 0, else 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
