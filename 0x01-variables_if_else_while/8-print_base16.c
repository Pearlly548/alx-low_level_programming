#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all numbers in lowercase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int index;
	char  j;

	for (index = 0 ; index < 10 ; index++)
		putchar(index + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
