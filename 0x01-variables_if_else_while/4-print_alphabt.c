#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always (0)
 *
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; ++abc)
	{
		if (abc != 'e' && abc != 'q')
		{
			putchar(abc);
		}
	}
	putchar('\n');
	return (0);
}
