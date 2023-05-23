#include "main.h"
/**
 * get_endianness - function that checks the endiannes
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *endian = (char *)&n;
	int n = 1;

	if (*endian == 1)
	{
		return (1);
	}
	return (0);
}
