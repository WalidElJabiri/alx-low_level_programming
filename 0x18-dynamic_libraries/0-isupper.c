#include "main.h"

/**
 * _isupper - check if int is upper
 * @c: the int that will be checked
 * Return: 1 if upper, else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
