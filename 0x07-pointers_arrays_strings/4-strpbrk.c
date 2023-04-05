#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - this function locates the first occurence
 * in the string s of any of the bytes in string accept
 * @s: string  to be checked
 * @accept: string containing characters to match
 *
 * Return: a pointer to the character in s that matches one
 * of the characters in accept, else return NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}
	return ('\0');
}

