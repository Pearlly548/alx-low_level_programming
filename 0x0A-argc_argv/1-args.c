#include <stdio.h>
/**
 * main - this prints the number of arguments
 * @argc: arguments passed into the program
 * @argv: an array of strings passed to the program
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int index;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (index = 0; *argv; index++, argv++)
			;

		printf("%d\n", index - 1);
	}

	return (0);
}
