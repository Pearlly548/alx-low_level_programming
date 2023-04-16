#include "main.h"

/**
 * _isdigit -  a program that checks if character is a digit
 * @c: carrier variable
 *  Return: 1 if true, 0 if otherwise
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);
}
