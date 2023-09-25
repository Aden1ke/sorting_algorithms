#include "sort.h"

/**
 *bubble_sort - sorts an array of integers in ascending orde
 *@array: the array to be sort
 *@size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, i;
	int tmp;

	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
}
