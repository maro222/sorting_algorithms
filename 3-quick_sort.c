#include "sort.h"

/**
 *swap - swap 2 elements
 *
 *@a: element a
 *@b: element b
 *
 *Return: nothing
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * part -  partition the array using the last element as pivot
 *
 * @array: array of integers
 * @size: size of array
 * @low: starting index
 * @high: ending index
 *
 * Return: index of smaller element
 */
int part(int array[], size_t size, int low, int high)
{
	int pivot = array[high];
	int j;
	int i = (low - 1);

	for (j = low; j <= high - 1; j++)
	{

		if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			if (array[i] != array[j])
				print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	if (i + 1 != high)
		print_array(array, size);
	return (i + 1);
}

/**
 * sort - function that implements quicksort
 * @array: Array to be sorted,
 * @size: size of array
 * @low: Starting index,
 * @high: Ending index
 *
 * Return: sorted array
 */
void sort(int array[], size_t size, int low, int high)
{
	if (low < high)
	{

		int partition_index = part(array, size, low, high);

		sort(array, size, low, partition_index - 1);
		sort(array, size, partition_index + 1, high);
	}
}

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

	sort(array, size, 0, size - 1);

}
