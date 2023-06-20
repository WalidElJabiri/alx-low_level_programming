#include "main.h"
#include <stdio.h>
/**
 * _strcpy - print the copy of an arr
 * @dest: destination arr
 * @src: source array
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
