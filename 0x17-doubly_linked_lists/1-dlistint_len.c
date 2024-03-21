#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked dlistint_t list.
 * @h: Pointer to the head of the list
 * Return: The number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t count = 0;
    const dlistint_t *temp = h;

    /* Traverse to find the actual head */
    while (temp && temp->prev != NULL)
        temp = temp->prev;

    /* Now 'temp' points to the actual head of the list */

    /* Traverse the list and count its elements */
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    return count;
}
