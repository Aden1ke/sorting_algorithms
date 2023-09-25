#include "sort.h"
#include <stdio.h>

/**
* swap - the positions of two elements into an array
* @array: array
* @element1: array element
* @element2: array element
*/
void swap(int *array, ssize_t element1, ssize_t element2)
{
	int temp;

	temp = array[element1];
	array[element1] = array[element2];
	array[element2] = temp;
}
/**
 * lomuto_partition - lomuto partition sorting scheme implementation
 * @array: array
 * @low: first array element
 * @high: last array element
 * @size: size array
 * Return: return the position of the last element sorted
 */
int lomuto_partition(int *array, ssize_t low, ssize_t high, size_t size)
{
	int pivot = array[high];
	ssize_t current = low, finder;

	for (finder = low; finder < high; finder++)
	{
		if (array[finder] < pivot)
		{
			if (array[current] != array[finder])
			{
				swap(array, current, finder);
				print_array(array, size);
			}
			current++;
		}
	}
	if (array[current] != array[high])
	{
		swap(array, current, high);
		print_array(array, size);
	}
	return (current);
}
/**
 * qs - qucksort algorithm implementation
 * @array: array
 * @first: first array element
 * @last: last array element
 * @size: array size
 */
void qs(int *array, ssize_t low, ssize_t high, int size)
{
	ssize_t position = 0;


	if (low < high)
	{
		position = lomuto_partition(array, low, high, size);

		qs(array, low, position - 1, size);
		qs(array, position + 1, high, size);
	}
}
/**
 *quick_sort - prepare the terrain to quicksort algorithm
 *@array: array
 *@size: array size
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	qs(array, 0, size - 1, size);
}
}
