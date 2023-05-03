#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a listint_t linked list
 * @head: ptr to the head of the list
 * @index: the index of the node, starting at 0
 * Return: the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	node = 0;
	while (node < index)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
		node++;
	}
	return (head);
}
