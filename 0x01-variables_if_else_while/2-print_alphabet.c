#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (success)
 */
int main(void)
{

	char abc;

	for (abc = 'a'; abc <= 'z'; ++abc)
	{
		putchar(abc);
	}
	putchar('\n');
	return (0);
}
