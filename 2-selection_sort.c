#include "sort.h"
/**
 * selection_sort - function sorts an  array using the selection sort
 * @array: content
 * @size: lenght
 * Return: return nothing (void)
 */
void selection_sort(int *array, size_t size)
{
	int min, temp;
	size_t i, j;

	if (array != NULL || !size)
		EXIT_SUCCESS;
	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = (i + 1); j < size; j++)
		{
			if (array[min] > array[j])
				min = j;
		}
		if (array[min] < array[i])
		{
			temp = array[min];
			array[min] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
