#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory area where is copied to
 * @src: memory area whre is copied from
 * @n; the num of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int a = n;

	for (i = 0; i < a; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
