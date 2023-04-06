#include "main.h"
/**
 * pr - the helping func
 * @n: the num
 * @i: i times
 * Return:1 if prime, 0 if not
 */
int pr(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	return (pr(n, i + 1));
}
/**
 * is_prime_number -  returns 1 if input integer is prime otherwise return 0
 * @n: the num
 * Return: 1 if the input integer is prime otherwise return 0
 */
int is_prime_number(int n)
{
	return (pr(n, 1));
}
