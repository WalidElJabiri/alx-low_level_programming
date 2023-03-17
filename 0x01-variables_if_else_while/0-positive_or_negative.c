#include <stdio.h>

/**
 * main - printing a random num and printing weither the num is positive or negative
 *
 * Return: 0 (Succes)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
