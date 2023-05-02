#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: ptr to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *l;

	while (head)
	{
		l = head->next;
		free(head);
		head = l;
	}
}
