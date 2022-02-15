#include "sort.h"

/**
 * quick_sort - sort an arr in ascending order with quick sorting
 * @array: array to sort
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	unsigned int i = size;
	unsigned int j = 0;
	int tmp;

	if (size <= 2)
		return;
	for (i = size; i > j; i--)
	{
		for (j = 0; j < size; j++)
		{
			if (array[i] < array[j])
			{
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
			}
		}
	}
}

/**
 * reverse_sort - quick sort in reverse
 * @array: modified array
 * @size: size of array
 *
 * Return: modified array
 */

int *reverse_sort(int *array, size_t size)
{
	unsigned int i = size;
	unsigned int j = 0;
	int tmp;

	if (size <= 2)
		return (array);
	for (i = size; i > j; i--)
	{
		for (j = 0; j < size; j++)
		{
			if (array[i] < array[j])
			{
				tmp = array[j];
				array[j] = array[i];
				array[i] = tmp;
			}
		}
	}
	return (array);
}
