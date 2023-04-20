#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: args
 * Return: 0 if n == 0, otherwise sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
	{
		return (0);
	}
	start(list, n);
	while (i < n)
	{
		sum += arg(list, int);
		i++;
	}
	end(list);
	return (sum);
}
