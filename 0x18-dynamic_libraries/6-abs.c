#include "main.h"
/**
 * _abs - the compute absolute value of an integer.
 * @n: the computed number
 * Return: the abs of int or zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs;

		abs = n * -1;
		return (abs);
	}
	return (n);
}
