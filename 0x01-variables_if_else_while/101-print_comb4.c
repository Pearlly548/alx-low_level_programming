#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a code to print 3 unique number no repeats
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int c, index, k;

	for (c = '0'; c <= '9'; c++)
	{
		for (index = '0'; index <= '9'; index++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (c < index && index < k)
				{
					putchar(c);
					putchar(index);
					putchar(k);

					if (c != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
