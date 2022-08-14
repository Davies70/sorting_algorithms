#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 * @array: array to be sorted
 * @n: size of array
 * Return: nothing
 *
 */
void bubble_sort(int *array, size_t n)
{
	size_t i = 0;
	size_t j = 0;
	int temp;

	if (array == NULL || n < 2)
		return;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < (n - 1); j++)
		{
			if (array[j + 1] < array[j])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, n);
			}
		}
	}

}
