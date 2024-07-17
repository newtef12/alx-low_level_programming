#include "search_algos.h"

/**
 *advanced_binary - Function that searches for a value using the
 *                  advanced binary searchiing algorithm
 *
 *@array: Pointer to the first element to search
 *@size: Size of the given array
 *@value: The value to search for
 *
 *Return: -1 if array is NULL or if the size is 0
 *        or the index where the value is located
 */


int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}


/**
  *advanced_binary_recursive - Searches recursively for a value in a sorted
  *                            array of integers using binary search
  *
  *@array: A pointer to the first element of the [sub]array to search
  *@l: The starting index of the [sub]array to search
  *@r: The ending index of the [sub]array to search
  *@value: The value to search for
  *
  *Return: If the value is not present, -1
  *        Otherwise, the index where the value is located
  */
int advanced_binary_recursive(int *array, size_t l, size_t r, int value)
{
	size_t i;

	if (r < l)
		return (-1);

	printf("Searching in array: ");
	for (i = l; i < r; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = l + (r - l) / 2;
	if (array[i] == value && (i == l || array[i - 1] != value))
		return (i);
	if (array[i] >= value)
		return (advanced_binary_recursive(array, l, i, value));
	return (advanced_binary_recursive(array, i + 1, r, value));
}
