#include <stdio.h>
#include <stdlib.h>
/**
 * main - print all possible different combinations of two digits
 * Return: Always  0 (Succes)
 */
int main(void)
{
	int n, m;

	n = 48;
	m = 49;

	while (n < 58 && m < 58)
	{
		if (n != m && n < m)
		{
			putchar(n);
			putchar(m);
			if (n != 56 || m != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		m++;
		if (m == 58)
		{
			n = n + 1;
			m = 49;
		}
		if (n >= 57 && m >= 57)
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}

