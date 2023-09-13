#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: targey array housing int
 * @size: number of element in the array
 * @cmp: function pointer to compare values
 * Return: -1, if no element matches; if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
