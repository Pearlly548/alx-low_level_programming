#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - this input looks for an integer
 * @array: the array given
 * @size: the size of the array
 * @cmp: function given to initiate the search
 *
 * Return: returns the index of the first element for which the given function
 * does not return 0
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
