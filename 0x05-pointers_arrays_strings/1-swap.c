#include "main.h"

/**
 * swap_int - swaps the values of two integer
 * @c: integer to swap
 * @d: integer to swap
 * Return: 0
 */
void swap_int(int *c, int *d)
{
	int a, b;

	a = *c;
	b = *d;

	*c = b;
	*d = a;
}
