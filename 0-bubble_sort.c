#include "sort.h"

/**
 * swap - swaps adjacent integers of an array
 * @x: pointer to int1
 * @y: pointer to int2
 * Returns: nothing
 */

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * bubble_sort - sorts an array of integers
 * @array: array to be sorted
 * @size: size of array
 * Return: nothing
 *
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int issorted;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		issorted = 1;
		for (j = 0; j < (size - 1); j++)
		{
			if (array[j + 1] < array[j])
			{
				swap(&array[j], &array[j + 1]);
				issorted = 0;
				print_array(array, size);
			}
		}
		if (issorted == 1)
			break;
	}
}
