#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print both lower and uppercase characters
 * Return: always 0 (success)
 */

int main(void)
{
	char index;

	for (index = 'a' ; index <= 'z' ; index++)
		putchar(index);
	for (index = 'A' ; index <= 'Z' ; index++)
		putchar(index);
	putchar('\n');
	return (0);
}
