#include "sort.h"

/**
*swap - the positions of two elements into an array
*@array: array
*@item1: array element
*@item2: array element
*/
void swap(int *array, int item1, int item2)
{

	int t;

	t = array[item1];
	array[item1] = array[item2];
	array[item2] = t;
}
/**
 * shell_sort - function that sorts an array of integers in ascending
 * order using the Shell sort algorithm, using the Knuth sequence
 * @size: size of the array
 * @array: list with numbers
 */
void shell_sort(int *array, size_t size)
{
	size_t n = 1, m, index = 0;

	if (array == NULL || size < 2)
		return;
	while (n < size / 3)
		n = 3 * n + 1;
	while (n >= 1)
	{
		for (m = n; m < size; m++)
			for (index = m; index >= n &&
			 (array[index] < array[index - n]); index -= n)
				swap(array, index, index - n);
		print_array(array, size);
		n /= 3;
	}
}
