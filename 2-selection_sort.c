#include "sort.h"
/**
 * selection_sort - function that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 * @size: size of the array
 * @array: list with numbers
 */
void selection_sort(int *array, size_t size)
{
	size_t m, index;
	int t, p, flag = 0;

	if (array == NULL)
		return;
	for (m = 0; m < size; m++)
	{
		t = m;
		flag = 0;
		for (index = m + 1; index < size; index++)
		{
			if (array[t] > array[index])
			{
				t = index;
				flag += 1;
			}
		}
		p = array[m];
		array[m] = array[t];
		array[t] = p;
		if (flag != 0)
			print_array(array, size);
	}
}
