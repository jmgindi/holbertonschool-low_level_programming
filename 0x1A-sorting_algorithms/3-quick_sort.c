#include "sort.h"

/**
 * quick_sort: Sorts an array of integers using the quick sort method.
 *
 * @array: Array to sort
 * @size: Size of array
 *
 * Return: none (void function)
 */
void quick_sort(int *array, size_t size)
{
	size_t lo, hi, p_index;

	if (!array || size < 2)
		return;

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
 * partition: Sets the pivot and alligns elements to the
 * left of the pivot point in ascending order.
 *
 * @lo: First index, moves to right.
 * @hi: End of array, where partition is set initially.
 *
 * Return: Next pivot point.
 */
size_t partition(int *array, size_t lo, size_t hi)
{
	int swap;	
	size_t j, i = lo - 1;

	for (j = lo; j <= hi - 1; j++)
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
