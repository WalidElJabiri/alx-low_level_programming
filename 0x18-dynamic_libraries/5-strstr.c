#include "main.h"
/**
 * _strstr - prints the consecutive caracter
 * @haystack: source str
 * @needle: searching str
 * Return: new str
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		if ((*haystack == *needle && coincidence(haystack, needle) == 1) || !*needle)
		{
			return (haystack);
		}
		else
		{
			haystack++;
		}
	}
	return (0);
}
/**
 * coin - define if the string b is inside a.
 * @j: source string
 * @k: str to be searched
 * Return: 1 coincidence, otherwise 0.
 */
int coin(char *j, char *k)
{
	while (*k && *k == *j)
	{
		k++;
		j++;
	}
	if (*k == '\0')
		return (1);
	else
		return (0);
}
