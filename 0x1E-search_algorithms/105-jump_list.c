#include "search_algos.h"
/**
 *jump_list - Function that searches for a value using the
 *            jump search algorithm
 *
 *@list: Pointer to the head of the singly linked list
 *@size: Size of the list
 *@value: The value to search for
 *
 *Return: The value of the search in query or -1 if
 *        the list is NULL or size is 0
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *leap;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (node = leap = list; leap->index + 1 < size && leap->n < value;)
	{
		node = leap;
		for (step += step_size; leap->index < step; leap = leap->next)
		{
			if (leap->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", leap->index, leap->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, leap->index);

	for (; node->index < leap->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
