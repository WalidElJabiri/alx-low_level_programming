#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *s;
	unsigned int i = 0;

	va_start(list, n);
	while (i < n)
	{
		s = va_arg(list, char *);
		if (s)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
