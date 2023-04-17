#include "main.h"
#include <stdlib.h>

/**
 * create_array - this program  creates an array of a type of char
 * @size: size of the array made
 * @c: the input used to check the array initialization
 *
 * Return: this function returns a char
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
