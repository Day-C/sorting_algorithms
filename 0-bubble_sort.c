#include "sort.h"
/**
 * duddle_sort - function sorts array using the bubble sort algorithm
 * @array: conetent to be sorted
 * @size: size of content
 * Return: returns nothing (void)
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, i = 0;
	int temp;

	while (i < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
				continue;
		}	}
		i++;
	}
}
