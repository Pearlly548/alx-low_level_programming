#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates strings using a certain amount of  input
 * @s1: The firs input string.
 * @s2: The second input string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 * Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i;
	unsigned int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		;
	for (k = 0; s2[k]; k++)
		;
	if (k < n)
		k = n;
	s3 = malloc((i + n) + 1);
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		s3[i] = s1[i];
	for (k = 0; k < n; k++)
	{
		s3[i] = s2[k];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}

