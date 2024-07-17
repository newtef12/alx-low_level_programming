#include "search_algos.h"


/**
 *exponential_search - Function that searches for a value using the
 *                     exponential searchiing algorithm
 *
 *@array: Pointer to the first element to search
 *@size: Size of the given array
 *@value: The value to search for
 *
 *Return: -1 if array is NULL or if the size is 0
 *        or the index where the value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t a = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (a = 1; a < size && array[a] <= value; a = a * 2)
			printf("Value checked array[%ld] = [%d]\n", a, array[a]);
	}

	right = a < size ? a : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", a / 2, right);
	return (_binary_search(array, a / 2, right, value));
}

/**
  *_binary_search - Searches for a value in a sorted array
  *                  of integers using binary search
  *
  *@array: A pointer to the first element of the array to search.
  *@l: The starting index of the [sub]array to search.
  *@r: The ending index of the [sub]array to search.
  *@value: The value to search for.
  *
  *Return: If the value is not present or the array is NULL, -1.
  *        Otherwise, the index where the value is located.
  *
  */
int _binary_search(int *array, size_t l, size_t r, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (r >= l)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = l + (r - l) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			r = i - 1;
		else
			l = i + 1;
	}

	return (-1);
}
