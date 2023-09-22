#include "sort.h"

/**
 *bubble_sort - sort the arrays number ascending
 *
 *@array: array of numbers
 *@size: size of numbers
 *
 *Return: return the array ascending
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int flag;

	for (i = 0; i < size; i++)
	{
		flag = 1;
		for (j = 1; j < size - i; j++)
		{
			if (array[j - 1] > array[j])
			{
				int temp = array[j - 1];

				array[j - 1] = array[j];
				array[j] = temp;
				flag = 0;
				print_array(array, size);
			}
		}
		if (flag == 1)
			break;
	}
}
