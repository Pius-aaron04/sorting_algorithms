#include "sort.h"

/**
 * partition - splits and sorts array
 * @array: array of integers
 * @low: @array lower bound
 * @high: @array upper bound
 * @size: size of @array
 * Return: part of array
 */

size_t partition(int *array, size_t low, size_t high, size_t size)
{
	size_t i = low, j;
	int pivot, temp;

	pivot = array[high];

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
		}
	}
	temp = array[i];
	array[i] = array[high];
	array[high] = temp;
	print_array(array, size);
	return (i);

}

/**
 * sort - sorts array
 * @array: array of integers
 * @low: @array lower bound
 * @high: @array upper bound
 * @size: size of @array
 */

void sort(int *array, size_t low, size_t high, size_t size)
{
	size_t part;

	if (low < high)
	{
		part = partition(array, low, high, size);
		if (part != 0)
			sort(array, low, part - 1, size);
		sort(array, part + 1, high, size);
	}
}


/**
 * quick_sort - sorts an array of integers using lumoto
 * partitioning method
 * @array: array of size @size
 * @size: size of @array
 */

void quick_sort(int *array, size_t size)
{
	sort(array, 0, size - 1, size);
}
