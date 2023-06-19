#include "main.h"

/**
 * _islower - check if int is lower
 * @c: the int that will be checked
 * Return: 1 if lower, else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
