#include "main.h"
/**
 * get_bit - function returns the value of a bit at a given index
 * @n: the bit value
 * @index: the index
 * Return: the value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
	{
		return (0);
	}
	return (1);
}
