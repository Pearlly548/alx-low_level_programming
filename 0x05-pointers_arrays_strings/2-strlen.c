#include "nain.h"
/**
 * _strlen - the lenght of a string
 * @s: parameter to string lenght
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++
	}

	return (longi);
}

