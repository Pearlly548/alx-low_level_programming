#include <stdio.h>

/**
 * main - main function
 *
 * Description: print all possible combinations of numbers
 * separate them with commas
 *
 * Return: always (0)
 */

int main(void)
{
	int index;

	for (index = 0; index < 10; index++)
	{
		putchar(index + '0');
		if (index < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
