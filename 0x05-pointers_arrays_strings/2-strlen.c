#include "nain.h"
/**
 * _strlen - the lenght of a string
 * @s: parameter to string lenght
 * Return: lenght of string
 */
int _strlen(char *s)

{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	return (len);
}
