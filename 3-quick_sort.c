#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 *  using the lomuto partition scheme
 *
 * @array: array of integers to be sorted
 * @size: size of array
 *
 * Return: sorted array
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	sort(array, 0, size - 1);

}
