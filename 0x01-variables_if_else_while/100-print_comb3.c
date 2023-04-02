#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: prints two digits combination
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int index, j;

	for (index = 0; index < 9; ++index)
	{
		for (j = index + 1; j < 10; ++j)
		{
			putchar((index % 10) + '0');
			putchar((j % 10) + '0');

			if (index == 8 && j == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
