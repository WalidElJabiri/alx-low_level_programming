
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
