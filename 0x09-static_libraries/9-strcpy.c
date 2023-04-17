#include "main.h"
/**
 *_strcpy - makes a copy of the string
 * @dest: destination to copy into
 * @src: paramter to copy
 *
 * Return: (0)
 */
char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}

