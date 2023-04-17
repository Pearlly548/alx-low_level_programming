#include "main.h"
#include <stdlib.h>

/**
 * array_range - program prints an array of integers
 * @min: parameter for minimum values
 * @max: parameter for maximum values
 *
 * Return: returns a pointer to the new array
 */
int *array_range(int min, int max)
{
	int index, m;
	int *ary;

	if (min > max)
		return (NULL);
	m = max - min;
	ary = malloc(sizeof(int) * (m + 1));
	if (ary == NULL)
		return (NULL);
	for (index = 0; min <= max; index++)
	{
		ary[index] = min;
		min++;
	}
	return (ary);
}
