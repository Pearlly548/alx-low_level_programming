#include "main.h"

/**
 * cap_string - Capitalizes all work of a string
 * @str: the string to be capitalized
 *
 * Return: a pointer to the changed string
 */
char *cap_string(char *str)
{
	int i, j, k;

	char syms[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
	'(', ')', '{', '}'};

	j = 32;

	for (i = 0; str[i] != '\0'; i++)
	{

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - j;
		}
		j = 0;
		for (k = 0; syms[k]; k++)
		{
			if (syms[k] == str[i])
			{
				j = 32;
				break;
			}
		}
	}
	return (str);
}

