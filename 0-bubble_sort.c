#include "sort.h"
void swap(int *a, int *b);
/**
 * bubble_sort - sort an array of integer in ascending order
 * @array: the array to order and print
 * @size: size of array to order
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int m = 0, n = 0;

	if (size <= 1)
		return;

	for (m = 0; m < (size - 1); m++)
		for (n = 1; n < size; n++)
			if (array[n - 1] > array[n])
			{
				swap(&array[n - 1], &array[n]);
				print_array(array, size);
			}
}

/**
 * swap - swap two pointers to integer
 *
 * @a: first int pointer
 * @b: second int pointer
 */
void swap(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
