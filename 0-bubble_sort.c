#include "sort.h"

/**
 * bubble_sort - bubble sorter
 * @array: input data for sorting
 * @size: number of inputs
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, tmp;
/* outer for loop */
	for (i = 0; i < size; i++)
	{
/* inner for loop */
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
/* swap the elements of variables to sort them */
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
