#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the num of elements in a linked list_t
 * @h: the list
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
