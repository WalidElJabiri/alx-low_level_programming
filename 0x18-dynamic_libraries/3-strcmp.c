#include "main.h"
/**
 * _strcmp - compares two strings character by character
 * @s1: a pointer to the fiurst str
 * @s2: a pointer to the second str
 * Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
