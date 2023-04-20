#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - this function prints a function given as a parameter
 * @array: the array to iterate through
 * @size: how many element to print
 * @action: the function given as parameter
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
