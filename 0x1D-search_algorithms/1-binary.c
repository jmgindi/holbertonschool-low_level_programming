#include "search_algos.h"

/**
 * binary_search - searches a sorted array using binary search
 * @array: sorted array to search
 * @size: length of array
 * @value: value to look for
 *
 * Return: index of value, or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	int mid = size / 2, l = 0, r = size - 1;
	int i;

	if (!array)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r - 1; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (l + r) / 2;
		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			r = mid - 1;
		else if (array[mid] < value)
			l = mid + 1;
	}
	return (-1);
}
