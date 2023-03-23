#include "main.h"

/**
 * _isdigit -  check for a digit (0 through 9).
 * @c: the num
 * Return: 1 if digit, else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
