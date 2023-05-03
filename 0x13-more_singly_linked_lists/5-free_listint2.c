#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list
 * @head: ptr of the address of the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *l;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		l = (*head)->next;
		free(*head);
		*head = l;
	}
	head = NULL;
}
