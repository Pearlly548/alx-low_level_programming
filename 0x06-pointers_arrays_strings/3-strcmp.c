#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1: a pointer to the first string to be compared
 * @s2: a pointer to the second string to be compared
 *
 * Return: if str1 < str2, the negative difference of
 * the first unmatched characters.
 *	if s1 = =s2, 0
 *	if s1 > s2, the positive difference of
 *	the first unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
	int r;
	int n;

	r = 0;
	while (s1[r] == s2[r] && (s1[r] != '\0' || s2[r] != '\0'))
	{
		r++;
	}
	n = s1[r] - s2[r];
	return (n);
}
