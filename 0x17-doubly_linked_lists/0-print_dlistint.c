#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked list.
 * @dlistint_t: doubly linked list
 * @h: head
 * Return: num of elements
 */
size_t print_dlistint(const dlistint_t *h){
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
                printf("%d\n", h->n);
                h = h->next;
                i++;
                
            }
            return i;
        }
}
