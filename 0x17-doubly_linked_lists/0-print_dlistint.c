#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;
    dlistint_t *head = NULL; /* Define a temporary head pointer */

    /* Handle the case where the given head is NULL */
    if (h == NULL) {
        printf("List is empty\n");
        return 0;
    }

    /* Iterate to find the actual head of the list */
    while (h->prev != NULL) {
        h = h->prev;
    }
    head = (dlistint_t *)h; /* Now 'head' points to the actual head of the list */

    /* Traverse the list and print its elements */
    while (head != NULL)
    {
        printf("%d\n", head->n);
        head = head->next;
        count++;
    }

    return count;
}
