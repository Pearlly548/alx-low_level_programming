#include "main.h"

/**
 * print_alphabet_10 - functions that prints 10x alphabets
 *
 * Description: print the alphabet 10 times
 * Return; always 0
 *
 */
void print_alphabet_x10(void)
{
	char c;
	int n;

	n = 0
	while (n < 10)
	{	
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		n++;
		_putchar('\n');
	}
}	
