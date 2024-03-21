#include "lists.h"
#include <stdio.h> /* Include this header file */

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;
    
    /* Handle the case where the list is empty */
    if (h == NULL) {
        printf("List is empty\n");
        return 0;
    }

    /* Traverse to find the actual head */
    while (h->prev != NULL) {
        h = h->prev;
    }

    /* Now 'h' points to the actual head of the list */

    /* Traverse the list and print its elements */
    while (h != NULL)
    {
        printf("%d\n", h->n);
        count++;
        h = h->next;
    }

    return count;
}
