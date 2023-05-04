#include "main.h"

/**
 * flip_bits - this function flips bits from one number to the other
 * @n: the input number to be flipped
 * @m: the number to be flipped to
 *
 * Return: the number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff != 0)
	{
		count += diff & 1;
		diff >>= 1;

	}
	return (count);
}
