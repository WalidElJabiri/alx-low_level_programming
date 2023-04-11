#include <stdlib.h>
#include "main.h"
/**
 * create_array -  creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of an arrsy
 * @c: the character in an array
 * Return: an array
 */
char *create_array(unsigned int size, char c)
{
	char *r;
	unsigned int i;

	if (size == NULL)
        {
                return (NULL);
        }
	r = malloc(size * sizeof(char));
	if (r == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		r[i] = c;
		i++;
	}
	return (r);
}

