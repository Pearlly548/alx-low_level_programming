#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @src: the source string
 *@dest: the destiation string to be concatenated upon
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
