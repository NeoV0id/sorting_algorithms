#include "sort.h"

/**
 * bubble_sort - sort an array in ascending with bubble sorting
 * @array: array to sort
 * @size: size of the array
 */

void bubble_sort(int *array, size_t size)
{
	unsigned int i;
	int tmp;

	if (size <= 2)
		return;
	for (i = 0; i < size; i++)
	{
		if (array[i] > array[i+1])
		{
			tmp = array[i];
			array[i] = array[i+1];
			array[i+1] = tmp;
			print_array(array, size);
		}
		else
			continue;
	}
}
