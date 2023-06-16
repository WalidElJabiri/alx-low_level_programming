#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the head
 * @index: index
 * Return: NULL if the node does not exist or 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *c_node;
	unsigned int i;

	i = 0;
	for (c_node = head; c_node != NULL; c_node = c_node->next;)
	{
		if (i == index)
			return (c_node);
		i++;
	}
	return (NULL);
}
