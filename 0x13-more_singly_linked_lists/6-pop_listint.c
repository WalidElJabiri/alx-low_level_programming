#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: ptr to the address of the head of the list
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int h_node;
	listint_t *l;

	if (*head == NULL)
	{
		return (0);
	}
	l = *head;
	h_node = (*head)->n;
	*head = (*head)->next;
	free(l);
	return (h_node);
}
