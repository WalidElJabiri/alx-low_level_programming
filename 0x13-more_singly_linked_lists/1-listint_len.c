#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that returns the num of elems in listint_t list
 * @h: pointer to head of the list
 * Return: the num of elems in listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t node;

	node = 0;
	while (h)
	{
		h = h->next;
		node++;
	}
	return (node);
}
