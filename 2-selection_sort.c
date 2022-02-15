#include "sort.h"

/**
 * selection_sort - sort array in ascending
 * @array: array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, tmp1;

	int tmp;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		tmp1 = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[tmp1])
				tmp1 = j;
		}
		tmp = array[i];
		array[i] = array[tmp1];
		array[tmp1] = tmp;
		if (i != tmp1)
			print_array(array, size);
	}
}
