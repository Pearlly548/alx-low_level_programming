#include "main.h"

/**
 * print_alphabet - entry point
 * Return: Always 0;
 *Description: this function prints the alphabet
 *
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
