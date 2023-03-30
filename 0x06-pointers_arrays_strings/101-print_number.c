#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed
 * Return: 0
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{	print_number(n1 / 10);

	_putchar((num % 10) + '0');
}
