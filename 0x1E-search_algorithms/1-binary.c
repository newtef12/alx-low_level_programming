#include "search_algos.h"


/**
 *binary_search - Function that searches a ascending sorted
 *                array to find a value
 *
 *@array: Pointer to first element in array to search
 *@size: number of elements in array
 *@value: value to search for
 *
 *Return: Index of matched value in array or -1 if error or not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t bin, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (bin = left; bin < right; bin++)
			printf("%d, ", array[bin]);
		printf("%d\n", array[bin]);

		bin = left + (right - left) / 2;
		if (array[bin] == value)
			return (bin);
		if (array[bin] > value)
			right = bin - 1;
		else
			left = bin + 1;
	}

	return (-1);
}
