#include "sort.h"
#include <stdbool.h>
#include <stddef.h>

/**
 *bubble_sort - sorting algorithm
 *@array: sorted array
 *@size: size of array
 */

void bubble_sort(int *array, size_t size)
{

	size_t i;
	int temp;
	bool swapped = true;

	while (swapped)
	{
		swapped = false;

		for (i = 0; i < size - 1; ++i)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = true;
			}
		}
	}
}
