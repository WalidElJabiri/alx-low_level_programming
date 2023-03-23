#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * @i: the num
 * Return: 0
 */
void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
		_putchar('\n');
		return (i);
	}
}
