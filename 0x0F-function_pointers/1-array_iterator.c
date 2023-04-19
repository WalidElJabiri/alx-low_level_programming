#include "function_pointers.h"
/**
 * array_iterator -  executes a function given as a parameter
 * on each element of an array
 * @array: an array
 * @size: num of of elems
 * @action: pointer to func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
