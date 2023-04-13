#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the num
 * Return: null if fun failed otherwise s
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s
	int a = 0, b = 0, c = 0, d;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	if (n >= b)
	{
		c = a + b;
	}
	else
	{
		c = a + n;
	}
	s = malloc(sizeof(char) * c + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	b = 0;
	for (d = 0; d < c; d++)
	{
		if (d <= a)
		{
			s[d] = s1[d];
		}
		else if (d >= a)
		{
			s[d] = s2[b];
			b++;
		}
	}
	s[d] = '\0';
	return (s);
}
