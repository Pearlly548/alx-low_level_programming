#include "main.h"

/**
 * clear_bit - this program sets the value of a bit to 0 at a given index
 * @n: the input number
 * @index: the index starting from 0
 *
 * Return: 1 if successful and -1 if error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)

		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
