#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 *  using the selection sort algorithm
 *
 * @array: array of integers to be sorted
 * @size: size of array
 *
 * Return: sorted array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;

	for (i = 0 ; i < n - 1 ; i++)
	{
		min = i;

		for (j = i + 1 ; j < n ; j++)
		{
			if (array[j] < array[min])
				min = j;
		}

		temp = array[i];
		array[i] = array[min];
		array[min] = temp;

		print_array(array, size);

	}
}
