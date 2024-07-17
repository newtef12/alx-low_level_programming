#include "search_algos.h"

/**
 *jump_search - Function that searches for a value using the jump
 *              searchiing algorithm
 *
 *@array: Pointer to the first element to search
 *@size: Size of the given array
 *@value: The value to search for
 *
 *Return: -1 if array is NULL or if the size is 0
 *        or the index where the value is located
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, leap, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = leap = 0; leap < size && array[leap] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", leap, array[leap]);
		i = leap;
		leap += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", i, leap);

	leap = leap < size - 1 ? leap : size - 1;
	for (; i < leap && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	return (array[i] == value ? (int)i : -1);
}
