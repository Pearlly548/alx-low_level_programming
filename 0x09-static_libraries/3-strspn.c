#include "main.h"

/**
 * _strspn - function that calculates length of substring prefix
 * @s: the string to be checked
 * @accept:prefix to be measured
 *
 * Return: returns s - accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}

