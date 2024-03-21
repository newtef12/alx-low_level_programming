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
    const dlistint_t *temp = h;
    size_t count = 0;

    /* Handle the case where the list is empty */
    if (temp == NULL) {
        return 0;
    }

    /* Traverse to find the actual head */
    while (temp->prev != NULL) {
        temp = temp->prev;
    }

    /* Now 'temp' points to the actual head of the list */

    /* Traverse the list and print its elements */
    while (temp != NULL)
    {
        printf("%d\n", temp->n);
        count++;
        temp = temp->next;
    }

    return count;
}
