#include "search_algos.h"

/**
 * print_array - prints the array of ints, separated with commas
 * @array: a pointer to the array
 * @first: the first index
 * @last: the last index
 */

void print_array(int *array, size_t first, size_t last)
{
	size_t i;

	printf("Searching in array: ");
	for (i = first; i <= last; i++)
	{
		if (i != first)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value
 * Return: the index where value is located or -1 on failure or not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, first = 0, last = size - 1;

	if (array)
	{
		while (first <= last)
		{
			print_array(array, first, last);
			i = (first + last) / 2;

			if (value > array[i])
				first = i + 1;
			else if (value < array[i])
				last = i - 1;
			else
				return (i);
		}
	}

	return (-1);
}
