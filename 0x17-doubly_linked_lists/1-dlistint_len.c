#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list.
 * @h: head
 * Return: num of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
        int i = 0;

        if (h == NULL)
                return 0;
        else
        {
                while (h->prev != NULL)
                {
                        h = h->prev;
                }
                while (h != NULL)
                {
                        h = h->next;
                        i++;
                }
                return i;
        }
}
