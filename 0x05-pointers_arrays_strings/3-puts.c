#include "main.h"

/**
 * _puts - prints to a string, followed by a new line to stdout
 * @str: string to print
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putschar(*str++);
	}
		_putschar('\n');
}
