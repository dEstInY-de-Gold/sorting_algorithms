#include "sort.h"

/**
 * bubble_sort - bubble sorter
 * @array: input data for sorting
 * @size: number of inputs
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int *tmp;

	for (i = 0; i <= size-2; i++)
	{
		for (j = 0; j <= size-i-1; j++)
		{
			if (array[j] < array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
		}
	}
}
