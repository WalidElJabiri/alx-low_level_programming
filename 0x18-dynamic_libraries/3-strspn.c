#include "main.h"
/**
 * _strspn - prints the consecutive caracters
 * @s: source string
 * @accept: searching string
 * Return: new str
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n;

	for (n = 0; *(s + n); n++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(s + n) == *(accept + i))
				break;
		}
	if (*(accept + i) == '\0')
		break;
	}
	return (n);
}
