#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: ptr to the address of the headof the list
 * @n: the int
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		return (NULL);
	}
	n = node->n;
	*head = node->next;
	*head = node;
	return (node);
}
