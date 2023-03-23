#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		while (i != 2 && i != 4)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
