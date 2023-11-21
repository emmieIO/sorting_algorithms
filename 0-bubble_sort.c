#include "sort.h"

/**
 * swap - Function to swap integers
 * @a:	parameter a
 * @b:	parameter b
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Function containing the bubble sort logic
 * @array:	arrays of integer
 * @size:	size of array
 *
 * Description: the function prints out the array after each swap
 */
void bubble_sort(int *array, size_t size)
{
	int swapped = 0;
	size_t i, len = size;


	if (array == NULL || size < 2)
		return;

	while (swapped == 0)
	{
		swapped = 1;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap(array + i, array + i + 1);
				swapped = 0;
				print_array(array, size);
			}

		}
		len--;
	}
}
