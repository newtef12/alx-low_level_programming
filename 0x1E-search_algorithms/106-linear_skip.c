#include "search_algos.h"

/**
 *linear_skip - Function that searches for a value using the
 *              jump search algorithm
 *
 *@list: Pointer to the head of the singly linked list
 *@value: The value to search for
 *
 *Return: The value of the search in query or NULL
 *        if head is NULL or value not in list
 */


skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *leap;

	if (list == NULL)
		return (NULL);

	for (node = leap = list; leap->next != NULL && leap->n < value;)
	{
		node = leap;
		if (leap->express != NULL)
		{
			leap = leap->express;
			printf("Value checked at index [%ld] = [%d]\n",
					leap->index, leap->n);
		}
		else
		{
			while (leap->next != NULL)
				leap = leap->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, leap->index);

	for (; node->index < leap->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
