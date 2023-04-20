#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: an array
 * @size: number of elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
