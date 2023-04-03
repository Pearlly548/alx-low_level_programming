#include "main.h"
#include <stddef.h>

/**
  * _strchr - function to locate char in string
 * @s: pointer to string
 * @c: character to be located
 *
 * Return: return the pointer to the char
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
