#include <stdlib.h>
#include "main.h"
/**
 * -calloc - function that allocates memory for an array
 * @nmemb: num of elements
 * @size: the size
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int b = 0, a;
	char *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	b = nmemb * size;
	p = malloc(b);
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < b; a++)
	{
		p[a] = 0;
	}
	return (p);
}
