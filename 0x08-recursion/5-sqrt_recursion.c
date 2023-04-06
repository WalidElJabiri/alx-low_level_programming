#include "main.h"
/**
 * _sq - the helping function
 * @n: the number
 * @num: the square root num of n
 * Return: the square root
 */
int _sq(int n, int num)
{
	if (num * num > n)
	{
		return (-1);
	}
	else if (num * num == n)
	{
		return (num);
	}
	return (_sq(n, num + 1));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: the number
 * Return: the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	return (_sq(n, 1));
}
