#include "main.h"
/**
 * flip_bits - function that returns the number of bits
 * @n: the num
 * @m: num to flip n to
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m, num = 0;

	while (x > 0)
	{
		bit += (x & 1);
		x >>= 1;
	}
	return (bit);
}
