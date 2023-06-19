#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - prints the consecutive caracter
 * @s: source string
 * @accept: searching string
 * Return: new str
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, n;

	for (i = 0; *(s + i); i++)
	{
		for (n = 0; *(accept + n); n++)
		{
			if (*(s + i) == *(accept + n))
			{
				break;
			}
		}
		if (*(accept + n) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
