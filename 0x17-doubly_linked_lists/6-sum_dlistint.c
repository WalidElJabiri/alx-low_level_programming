#include "lists.h"

/**
 *  sum_dlistint - returns the sum of all data
 * @head: the head
 * Return: 0
 */

int sum_dlistint(dlistint_t *head)
{

	int num = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		num += i->n;
	}
	return (num);
}
