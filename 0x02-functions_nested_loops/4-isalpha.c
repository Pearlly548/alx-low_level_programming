#include "main.h"

/**
 * _isalpha - Entry point
 * @c: the integer value it collects
 * Description: checks the alphabet character
 * Return: 1 if true. 0 if false
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
