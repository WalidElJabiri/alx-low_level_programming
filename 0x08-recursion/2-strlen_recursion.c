#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: the char in the str
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
