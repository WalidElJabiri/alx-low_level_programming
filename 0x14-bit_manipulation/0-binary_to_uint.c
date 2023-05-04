#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: ptr to to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int i;

	if (!b)
	{
		return (0);
	}
	i = 0;
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		dec = 2 * dec + (b[i] - '0');
		i++;
	}
	return (dec);
}
