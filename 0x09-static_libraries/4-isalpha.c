#include "main.h"
/**
 * _isalpha - confirm if the character is an alphabet
 * @c: input parameter for the function
 * Return: 1 if success, 0 if not
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
