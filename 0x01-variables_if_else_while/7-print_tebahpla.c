#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints lowercase alphabets in reverse
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char zyx;

	for (zyx = 'z'; zyx >= 'a'; --zyx)
	{
		putchar(zyx);
	}
	putchar('\n');
	return (0);
}
