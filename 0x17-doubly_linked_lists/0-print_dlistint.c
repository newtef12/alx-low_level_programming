#include "lists.h"
#include <stdio.h>

size_t print_dlistint(const dlistint_t *h)
{
    size_t count = 0;
    const dlistint_t *temp;

    /* Handle the case where the given head is NULL */
    if (h == NULL) {
        printf("List is empty\n");
        return 0;
    }

    /* Traverse to find the actual head */
    temp = h;
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
