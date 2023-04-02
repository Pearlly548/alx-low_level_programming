#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all possible combinations
 * of two digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int index, j;

	for (index = 0; index < 100; ++index)
	{
		for (j = index + 1; j < 100; ++j)
		{
			putchar((index / 10) + '0');
			putchar((index % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			{
			if (index == 98 && j == 99)
				continue;
			}
			putchar(',');
			putchar(' ');
		}
}
	putchar('\n');
	return (0);
}
