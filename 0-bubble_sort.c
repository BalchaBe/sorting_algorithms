#include "sort.h"
/**
 * bubble_sort - sort array lements from min to max value
 * @array: array
 * @size: array size
 */
void bubble_sort(int *array, size_t size)
{

	size_t m, index, t = 0;

	if (size < 2)
		return;
	for (m = 0; m < size; m++)
		for (index = 0; index < size; index++)
		{
			if (array[index] > array[index + 1] && array[index + 1])
			{
			t = array[index];
			array[index] = array[index + 1];
			array[index + 1] = t;
			print_array(array, size);
			}
		}

