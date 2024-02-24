#include "sort.h"
/**
 * shell_sort - function sorts array in an ascending order
 * @array: list ot items to be sorted
 * @size: lenght of array
 * Return: return nothing (void)
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, temp, inteval = 0;

	if (array == NULL || size < 2)
		return;

	for (inteval = 1; inteval < (size / 3);)
		inteval = inteval * 3 + 1;

	for (; inteval >= 1; inteval /= 3)
	{
		for (i = inteval; i < size; i++)
		{
			j = i;
			while (j >= inteval && array[j - inteval] > array[j])
			{
				temp = array[j - inteval];
				array[j - inteval] = array[j];
				array[j] = temp;
				j -= inteval;
			}
		}
		print_array(array, size);
	}
}
