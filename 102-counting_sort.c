#include "sort.h"
#include <stdio.h>
/**
 *_calloc - this is a calloc function
 *@nmemb: number of elemets
 *@size: bit size of each element
 *Return: pointer to memory assignement
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int m = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return ('\0');
	p = malloc(nmemb * size);
	if (p == '\0')
		return ('\0');
	for (m = 0; m < (nmemb * size); m++)
		p[m] = '\0';
	return (p);
}
/**
 * counting_sort - this is a counting sort method implementation
 * @array: array to sort
 * @size: array size
 */
void counting_sort(int *array, size_t size)
{
	int index, maximun = 0, *counter = '\0', *tmp = '\0';
	size_t m;

	if (array == '\0' || size < 2)
		return;
	/* find maximun number */
	for (m = 0; m < size; m++)
		if (array[m] > maximun)
			maximun = array[m];
	counter = _calloc(maximun + 1, sizeof(int));
	tmp = _calloc(size + 1, sizeof(int));
	/* count the array elements */
	for (m = 0; m < size; m++)
		counter[array[m]]++;
	/* get the accumulative values */
	for (index = 1; index <= maximun; index++)
		counter[index] += counter[index - 1];
	print_array(counter, maximun + 1);
	/* get the new array sorted */
	for (m = 0; m < size; ++m)
	{
		tmp[counter[array[m]] - 1] = array[m];
		counter[array[m]]--;
	}
	/* replace old array to new array sorted */
	for (m = 0; m < size; m++)
		array[m] = tmp[m];
	free(tmp);
	free(counter);

}
