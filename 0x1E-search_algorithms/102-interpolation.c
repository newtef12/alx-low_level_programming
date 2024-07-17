#include "search_algos.h"

/**
 *interpolation_search - Function that searches for a value using the
 *                       interpolation searchiing algorithm
 *
 *@array: Pointer to the first element to search
 *@size: Size of the given array
 *@value: The value to search for
 *
 *Return: -1 if array is NULL or if the size is 0
 *        or the index where the value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t a, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		a = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (a < size)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", a);
			break;
		}

		if (array[a] == value)
			return (a);
		if (array[a] > value)
			r = a - 1;
		else
			l = a + 1;
	}

	return (-1);
}
