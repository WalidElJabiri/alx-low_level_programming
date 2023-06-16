#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: the head
 * @n: the int
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	else
	{
		new_node->n = n;
		new_node->next = *head;
		new_node->prev = NULL;
		if (*head != NULL)
			(*head)->prev = new;
		*head = new;
	}
	return (new);
}
