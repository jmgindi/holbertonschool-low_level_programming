#include "sort.h"

/**
 * quick_sort: sorts an array of integers using the quick sort method
 * @array: array to sort
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	size_t lo, hi, p_index;
	lo = array[0];
	hi = array[size - 1];
	if (lo < hi)
	{
		p_index = partition(array, lo, hi);

		quick_sort(array, lo, (p_index - 1));
		quick_sort(array, (p_index + 1), hi);
	}
}

/**
 *
 *
 *
 *
 */
size_t partition(int *array, size_t lo, size_t hi)
{
	size_t j, i = lo - 1;
	int swap;

	for(j = lo; j <= hi; j++)
	{
		if (array[j] <= arr[hi])
		{
			i++;
			swap = arr[i];
			arr[i] = arr[j];
			arr[j] = swap;
		}
	}
	swap = arr[i + 1];
	arr[i + 1] = arr[hi];
	arr[hi] = swap;

	return (i + 1);
}
