#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head of the list
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;

    /* Traverse to find the actual head */
    while (h && h->prev != NULL)
        h = h->prev;

    /* Now 'h' points to the actual head of the list */

    /* Traverse the list and count its elements */
    while (h != NULL)
    {
        count++;
        h = h->next;
    }

    return count;
}
