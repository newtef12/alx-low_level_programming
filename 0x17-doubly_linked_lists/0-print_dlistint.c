#include "lists.h"
#include <stdio.h>

size_t print_dlistint(h)
    const dlistint_t *h;
{
    size_t count = 0;
    const dlistint_t *temp;

    /* Temporary pointer to traverse the list */
    temp = h;

    /* Handle the case where the given head is NULL */
    if (temp == NULL) {
        printf("List is empty\n");
        return 0;
    }

    /* Traverse the list to find the actual head */
    while (temp->prev != NULL) {
        temp = temp->prev;
    }

    /* Now 'temp' points to the actual head of the list */

    /* Traverse the list and print its elements */
    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        temp = temp->next;
        count++;
    }

    return count;
}
