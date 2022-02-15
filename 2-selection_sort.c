#include "sort.h"

/**
 * selection_sort - sort array in ascending
 * @array: array to sort
 * @size: size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i = 0;
	int tmp;

	while (i < size)
	{
		tmp = array[i];
		i++;
		if (array[i] < tmp)
		{
			tmp = array[i];
			print_array(array, size);
		}
	}
}
