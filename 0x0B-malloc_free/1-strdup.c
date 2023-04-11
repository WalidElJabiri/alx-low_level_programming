#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory
 * @str: the string to be duplicated
 * Return: the new string
 */
char *_strdup(char *str)
{
	char *r;
	int e, i = 1;
	r = malloc((sizeof(char) * i) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}
	if (r == NULL)
	{
		return (NULL);
	}
	for (e = 0; e < i; e++)
	{
		r[e] = str[e];
	}
	r[e] = '\0';
	return (r);
}
