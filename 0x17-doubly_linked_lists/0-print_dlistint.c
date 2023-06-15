#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @dlistint_t: doubly linked list
 * @h: hea
 * Return: num of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t const *p;
	int i = 1;

	if (h == NULL)
		return 0;
	else
		for(p = h; p != NULL; p = p->next)
			printf("%d\n", p->n);
			i += 1;
			return i;
}
