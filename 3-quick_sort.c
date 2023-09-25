#include "sort.h"
#include <stdio.h>

/**
 * swap - swap two items
 * @array: int array
 * @itm1: array of item to be swapped
 * @itm2: array of item to be swapped
 */
void swap(*array, ssize_t itm1, ssize_t itm2)
{
	int temp = array[itm1];
	array[itm1] = array[itm2];
	array[itm2] = temp;
}
/**
 * lomuto_partition - lomuto partition sorting scheme implementation
 * @array: int array
 * @low: first array
 * @high: last array
 * Return: return the position of the last element sorted
 */
int lomuto_partition(int *array, ssize_t low, ssize_t high)
{
	 int pivot = array[high];
	 ssize_t current = low;

