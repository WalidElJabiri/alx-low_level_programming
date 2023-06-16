#include <stdlib.h>
#include "lists.h"
/**
 *  add_dnodeint_end -  adds a new node at the end of a dlistint_t list.
 * @head: the head
 * @n: integer
 * Return: the address of the new element, or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	while ((*head)->next != NULL)
	{
		*head = (*head)->next;
	}
	(*head)->next = new;
	new->prev = *head;
	return (new);
}
