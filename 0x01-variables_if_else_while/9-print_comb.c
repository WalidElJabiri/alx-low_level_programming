#include <stdio.h>
/**
 * main - Printing all possible combinations of single-digit numbers.
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		else if (i == '9')
		{
			break;
		}
	}
	putchar('\n');
	return (0);
}
