#include "sort.h"

/**
 * custom_swap_int - swap two integrs in an array
 * @a: the first integer to swap
 * @b: the second integer to swap
 */

void custom_swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * selection_sort - sort an array of intgers
 * @array: an array of integers
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			custom_swap_int(array + i, min);
			print_array(array, size);
		}
	}
}
