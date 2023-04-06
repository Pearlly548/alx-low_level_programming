#include "main.h"

/**
 * _puts_recursion - this function prints a string followed by a new line
 * @s: string to be printed
 *
 * Return: returns a non negative value if successful otherwise returns an EOF
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
