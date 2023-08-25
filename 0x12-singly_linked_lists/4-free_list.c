#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list and its nodes.
 * @head: Pointer to the list_t list to be freed.
 */
void free_list(list_t *head)
{
    list_t *current = head;
    
    while (current != NULL)
    {
        list_t *temp = current->next;
        
        free(current->str);
        free(current);
        
        current = temp;
    }
}
