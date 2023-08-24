#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for the project
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/**
 * print_list - Prints all elements of a linked list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes in the list.
 */
size_t print_list(const list_t *h);

/**
 * list_len - Counts the number of nodes in a linked list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes in the list.
 */
size_t list_len(const list_t *h);

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be stored in the new node.
 * Return: Pointer to the new head of the list.
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: String to be stored in the new node.
 * Return: Pointer to the head of the list.
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - Frees all nodes in a linked list.
 * @head: Pointer to the head of the list.
 */
void free_list(list_t *head);

#endif
