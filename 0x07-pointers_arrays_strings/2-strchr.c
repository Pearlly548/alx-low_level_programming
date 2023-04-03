#include "main.h"

/**
 * _strchr - finds a character in a string.
 * @s: The string to be searched.
 * @c: The character to be located.
 *
 * Return: If c is found - a pointer to the first occurence.
 * If c is not found - NULL.
 */
char *_strchr(char *s, char c)
{
	
	int x;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return (NULL);
}
