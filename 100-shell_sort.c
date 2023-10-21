#include "sort.h"

/**
 * insert_sort - sorts subrarrays generated from shell sort
 * @start: start index
 * @end: end index
 */

void insert_sort(int * array, size_t start, size_t, end)
{
	size_t i;
	int temp;

	while (start < end)
	{
		i = start;
		while(i && array[i - 1] < array[i])
		{
			temp = array[i];
			array[i] = array[i - 1];
			array[i - 1] = temp;
		}
	}
}

/**
 * shell_sort - sorts an array of integers using the knuth
 * gapping sequence
 * @array: array of integers to sort
 * @size: size of @array
 */

void shell_sort(int *array, size_t size)
{
	size_t gap = 1;
	size_t i;

	while (gap <= size)
		gap = gap * 3 + 1;
	gap = (gap - 1) / 3;

	for (i = 0; i < size; i++)
	{
		while (i + ga
	}
}
