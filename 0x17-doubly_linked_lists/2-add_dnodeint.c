#include <stdlib.h>

/* Define the dlistint_t structure */
struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
};
typedef struct dlistint_s dlistint_t;

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

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to a pointer to the head node.
 * @n: Data to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    /* Initialize the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    if (*head != NULL)
        (*head)->prev = new_node;

    *head = new_node;

    return new_node;
}
