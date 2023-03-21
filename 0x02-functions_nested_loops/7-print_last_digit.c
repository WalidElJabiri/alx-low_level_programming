#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: the number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
	{
		m = m * -1;
	}
	_putchar(m + '0');
	return (m);
}
