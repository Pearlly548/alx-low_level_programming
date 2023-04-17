#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this input returns a pointer to a newly-allocated space in memory
 * it contains the type of string given
 * @str:duplicated string
 *
 * Return:brings back the pointer to the string or NULL
 */
char *_strdup(char *str)
{
	char *nstr;
	int a, b;

	if (str == NULL)
		return (NULL);
	a = 0;
	for (; str[a]; a++)
		;
	nstr = malloc(sizeof(char) * (a + 1));

	if (nstr == NULL)
		return (NULL);

	for (b = 0; b < a; b++)
		nstr[b] = str[b];

	return (nstr);
}
